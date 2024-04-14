#include <iostream>
#include <cmath>
using namespace std;
char toUpper(char c){
    if(c>'A' && c<'Z'){
        return c;
        return char(c+32);
    }
}
int main(){
    cin >> c;
    cout << toUpper(c);
}