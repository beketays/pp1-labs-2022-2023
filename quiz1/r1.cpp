#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0, sum = 0;
    for(int i=0; i<s.size(); i++){
        cnt1 += s[i];
    }
    for(int i=0; i<s.size(); i++){
        cnt2 *= s[i];
    }
        
    sum = cnt1 +cnt2;
    cout << sum;


}