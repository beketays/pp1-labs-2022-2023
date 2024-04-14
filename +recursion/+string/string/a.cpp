#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n=0, m=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=65 && s[i]<=90){
            n++;
        }
        else if(s[i]>=97 && s[i]<=122){
            m++;
        }
    }
    cout << m << " " << n;
}