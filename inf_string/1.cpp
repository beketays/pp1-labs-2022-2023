#include <iostream>

using namespace std;

int main () {
    string s , t, r;
    cin >> s;
    cout << s[2] << endl;
    cout << s[s.size()-2] << endl;
    for(int i=0; i<5; i++) {
        t += s[i];
    }
    
    cout << t;

}