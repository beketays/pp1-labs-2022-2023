#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    char t;
    int a, cnt=0;
    cin >> s >> t >> a;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t){
            cnt++;
        }    
    }
    if(cnt==a){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}