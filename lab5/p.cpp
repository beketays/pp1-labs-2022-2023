#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'z'){
            s[i]=s[i]-25;
        }
        else{
            s[i]=s[i]+1;
        }
    }
    cout << s;
}