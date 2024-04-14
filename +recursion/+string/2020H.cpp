#include <iostream>

using namespace std;

int main(){
    char c; cin >> c;
    string s; cin >> s;
    string t = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]!=c){
            t+=s[i];
        }
    }
    cout << t;

}
