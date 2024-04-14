#include <iostream>
using namespace std;
string solve(string s){
    string t = "";
    int max1 = 0;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            if(t.size() > max1){
                max1 = t.size();
                ans = t;
            }
            t = "";
        }
        else {
            t+=s[i];
        }
    }
    return ans;

}

int main(){
    string s;
    getline(cin, s);
    s+=" ";
    cout << solve(s);

}
