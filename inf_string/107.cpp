#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    s += " ";
    string t = "";
    int max = 0;
    string ans;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            t+=s[i];
        }
        else {
            if(t.size()>max){
                max=t.size();
                ans = t;
            }
            t = "";
        }
    }
    cout << ans << endl << max;


}