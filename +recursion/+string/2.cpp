#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s;
    cin >> s ;
    cout << s << endl;
    int a;
    stringstream t;
    t << s;   // string s -> stringstream t;
    t >> a;   // strngstream t -> a;
    cout << a+3 << endl;
}