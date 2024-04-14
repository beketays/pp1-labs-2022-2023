#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool Sort(vector<int> v1, vector<int> v2){
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < v1.size(); i++){
        sum1 += v1[i];
    }
    for(int i = 0; i < v2.size(); i++){
        sum2 += v2[i];
    }
    if(sum1 > sum2){
        return false;
    }else{
        if(sum1 < sum2){
            return true;
        }else{
            if(v1.size() > v2.size()){
                return false;
            }else{
                if(v1.size() < v2.size()){
                    return true;
                }else{
                    for(int i = 0; i < v1.size(); i++){
                        if(v1[i] > v2[i]){
                            return false;
                        }else{
                            if(v1[i] < v2[i]){
                                return true;
                            }
                        }
                    }
                    return true;
                }
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > v;
    int a;
    for(int i = 0; i < n; i++){
        cin >> a;
        vector<int> va;
        int k;
        for(int i = 0; i < a; i++){
            cin >> k;
            va.push_back(k);
        }
        v.push_back(va);
    }
    sort(v.begin(), v.end(), Sort);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}