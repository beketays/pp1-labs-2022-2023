#include <iostream>
#include <stack>


using namespace std;

int main() {
    string s;
    cin >> s;

    stck <int> st;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') {
            st.push(')');
        }
        else () { 
            if(st.empty() && s[i] == '(') {
                cout << "NO";
                return 0;
            }
            st.pop();
        }
    }
    
    if(st.empty()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}