#include <iostream>
using namespace std;

string word(string s){
    string t = "";
    int max = 0;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' '){
            t+=s[i];
        }
        else {
            if(t.size() > max){
                max = t.size();
                ans = t;
            }
            t = "";
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    s += " "; 
    string a = word(s);
    cout << a << endl << a.size();
    
}