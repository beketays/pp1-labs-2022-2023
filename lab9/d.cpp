#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
   
    for(int i = 0; i<v.size(); i++){
        if(v[i]==k){
            cnt++;
        }
    }
    cout << cnt;
}