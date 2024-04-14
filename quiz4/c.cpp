#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int,int> mp;
    string s;
    getline(cin >> ws, s);  // 2 4 5 1 7
    // cin >> s
    string t;
    s += " ";
    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            int a;
            stringstream(t) >> a;
            mp[a] = 1;
            t = "";
        }
        else {
            t += s[i];
        }
    }
    for(int i=n; i<=m; i++) {
        if(mp[i] == 0) {
            cout << i << " ";
        }
    }
}
