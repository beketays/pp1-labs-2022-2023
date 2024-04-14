#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }
        else if(st.empty() && s[i] == ')'){
            cout << "NO";
            return 0;
        }
        else if(s[i] == ')'  && st.top()== '('){
            st.pop();
        }
    }
    if(st.empty()){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}