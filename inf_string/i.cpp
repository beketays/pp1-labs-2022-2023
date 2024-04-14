#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if(t.find(s) != -1) {
        cout << "yes";
    }
    else if(s == t) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}