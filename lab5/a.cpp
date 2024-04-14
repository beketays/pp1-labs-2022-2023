#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0, cnt2=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]<='z' && s[i]>='a'){
            cnt++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            cnt2++;
        }
    }
    cout << cnt << " " << cnt2;
    return 0;
}