#include <iostream>
using namespace std;
int main(){
    string s, t;
    getline(cin, s);
    s+=" ";
    int min=10000;  // или прировнять к s.size()+1;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            t+=s[i];
        }
        else{
            if(t.size()<min){
                min=t.size();
                ans = t;
            }
            t = "";
        }
    }
    cout << min << " " << ans;
}