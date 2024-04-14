#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    for(int i=s.size()-1; i>=0; i--){
        t+=s[i];
    }
    if(s==t){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

}