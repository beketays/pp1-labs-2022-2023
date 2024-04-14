#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    string t="";
    for(int i=s.size()-1; i>=0; i--){
        t+=s[i];
    }
    if(s==t){
        cout << "yes";
    }
    else {
        cout << "no";
    }

}