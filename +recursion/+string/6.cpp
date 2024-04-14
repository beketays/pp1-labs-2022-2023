// переводим стринг в интеджер
#include <iostream>

#include <sstream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int a;
    stringstream(s) >> a;   // string -> int
    cout << a;
}