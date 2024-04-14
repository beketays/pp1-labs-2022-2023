#include <iostream>
#include <set>

using namespace std;
int main(){
    string s, t;
    getline(cin, s);
    
    s+=" ";
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            set<char> st;
            for(int j=0; j<t.size(); j++){
            st.insert(t[j]);
            }
            if(t.size() == st.size()){
                cout << t;
            }
            t = "";
        }
        else {
            t+=s[i];
        }

    }
    
}