#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int max=0;
    for(int i=0; i<s.size(); i++)[
        if(int(s[i])>max){
            max=int(s[i]);
        }
    ]
    cout << char(max);

}