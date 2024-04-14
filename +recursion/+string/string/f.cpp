#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s;
    int l,r;
    cin >> s >> l >> r;
    cout << s.substr(l,r+1);
    
    /*for(int i=l; i<=r; i++){
        cout << s[i];
    }*/
}