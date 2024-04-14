#include <iostream>
using namespace std;
int main (){
    string s, t;
    getline(cin, s);
    s = s + " ";
    string ans;
    int max=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            t+=s[i];
        }
        else{
            cout << max << " " << ans << endl;
            if(max<t.size()){
                max=t.size();
                ans=t;
            }
            t = "";
        }
    }
    cout << ans;
}