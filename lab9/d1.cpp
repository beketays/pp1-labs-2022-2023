#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        mp.insert(a);
    }
    int cnt = 0;
    map<int, int> :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second == k){
            cnt++;
        }
    }    
    cout << cnt;
}