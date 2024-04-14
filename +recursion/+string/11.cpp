#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    char a;
    cin >> a;
    int cnt=0;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1] && s[i]==a){
            cnt++;
        }
    }
    if(cnt>0){
        cout << cnt+1;
    }
    else {
        cout << cnt;
    }
}