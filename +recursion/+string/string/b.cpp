#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int x;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
        }
    }
    cout << s[i];
}