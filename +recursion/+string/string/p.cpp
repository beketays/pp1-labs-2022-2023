#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int x;
    for(int i=0; i<s.size(); i++){
        x=int(s[i]);
        if(x==122){
            x=97;
        }
            else {
                x=x+1;
            }
    cout << char(x);
    }
}