#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> mp;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        int k; cin >> k;
        if(mp[s] == 0){
            mp[s] = k;
        }
        else {
            mp[s] += k;
        }
    }
    map<string, int> :: iterator it;
    for(it = mp.begin(); it!=mp.end(); it++){
        cout << it -> first << " " << it->second << endl;
    }
}