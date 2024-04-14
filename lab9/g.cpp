#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(s[i]=='1' && st.top()=='1'){
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }

    stack<char> st2;

    while(!st.empty()){
        st2.push(st.top());
        st.pop();
    }
    while(!st2.empty()){
        cout << st2.top();
        st2.pop();
    }


}