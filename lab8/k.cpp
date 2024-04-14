#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    int k, sum = 0; cin >> k;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<k; i++){
       sum += v[i];
    }
    cout << sum;
}