#include <iostream>

#include <cmath>

using namespace std;

int main() {

    string s;
    cin >> s;
    string t, r;
    for(int i=0; i<=ceil(s.size()/2); i++) {
        
        t += s[i];
    }
    for(int i=s.size()-1; i>=s.size()/2; i--) {
        if(s.size()%2 == 0)
        r += s[i];
    }
    cout << r;

    cout << t ;
    

    

}
