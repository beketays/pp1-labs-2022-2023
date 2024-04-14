#include <iostream>
using namespace std;
string polindrome(string s, int i, string t){
    if(i<0){
        if(t==s){
            return "Yes";
        }
        else {
            return "No";
        }
    }
    t+=s[i];
    return polindrome(s,i-1,t);

    

}

int main(){
    string s;
    cin >> s;
    
    cout << polindrome(s, s.size()-1, "");

}