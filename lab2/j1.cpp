#include <iostream>
using namespace std;
int main() {
    string s = "";
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
        s += to_string(a[i]);         // операция которая инт превращает в стринг 
    }
    int cnt=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='0'){
        cnt++;
        }
    } cout << cnt;
}