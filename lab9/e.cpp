#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> mp;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        mp[s]++;
    }
    int cnt = 0;
    map<string, int> :: iterator it;
    for(it = mp.begin(); it!=mp.end(); it++){
        if(it -> second == 3){
            cnt++;
        }
    }
    cout << cnt++;

}
