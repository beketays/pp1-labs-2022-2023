#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt=0, cnt2=0;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            cnt+=s[i];
        }
        else{
            cnt2+=s[i];
        }
    }
    if(cnt==cnt2){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}