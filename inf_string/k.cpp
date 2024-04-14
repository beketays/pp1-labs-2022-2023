#include <iostream>

using namespace std;

int main() {
    string s, t;
    getline(cin, s);

    for(int i=0; i<s.size(); i++) 
        if(s[i] == ' ') {
            s.erase(i,1);
            i--;
        }
    
    for(int i=s.size()-1; i>=0; i--){
        t += s[i];
    }

    if(s == t) {
        cout << "yes";
    }
    
    else {
        cout << "no";
    }
}