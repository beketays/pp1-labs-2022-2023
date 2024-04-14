#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            s.erase(i, 1);
            i--;
        }
    }
    string t;
    t = s;
    reverse(t.begin(), t.end());
    if(s==t){
        cout << "yes";
    }
    else {
        cout << "no";
    }

}