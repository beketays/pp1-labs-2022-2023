#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v, v2; 
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x%2==0){
            v.push_back(x);
        }
        else{
            v2.push_back(x);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    sort(v2.begin(), v2.end());
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
}