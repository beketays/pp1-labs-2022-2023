/*Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left <= right) {
            int mid = (left+right) / 2;

            if(target == nums[mid]) {
                 return mid;
            }
            else if(target < nums[mid]) {
                right = mid-1;
            }
            else {
                left = mid +1;
            }
        }
        return left;
    }
};

