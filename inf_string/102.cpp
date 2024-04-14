#include <iostream>
using namespace std;
int main(){
    char s; cin >> s;
    if(s >= '0' && s <= '9'){
        cout << "yes";
    }
    else {
        cout << "no";
    }
}