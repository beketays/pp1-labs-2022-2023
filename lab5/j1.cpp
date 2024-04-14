#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    t=s;
    reverse(s.begin(), s.end());
    if(s==t || t.substr(1) == s.substr(0, s.size()-1)){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}