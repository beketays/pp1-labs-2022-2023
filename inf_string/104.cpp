#include <iostream>
using namespace std;
int main(){
    char s;
    cin >> s;
    if(s>=65 && s<=90){
        s+=32;
    }
    else if(s>=97 && s<=122){
        s-=32;
    }
    cout << s;
}