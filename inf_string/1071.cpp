#include <iostream>

using namespace std;

int main() {
    string s, t;
    getline(cin,s);
    s += " ";
    int max = 0;
    string answr;
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' ') {
            t += s[i];
        }
        else {
            if(t.size() > max) {
                max = t.size();
                answr = t;
            }
            t = "";
        }
    }

    cout << answr << endl <<  max;
    
}
