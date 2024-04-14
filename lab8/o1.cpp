#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    string s, t = "";
    cin >> s;
    set<char> st;
    for(int i=0; i<s.size(); i++){
        t += tolower(s[i]);
    }

    for(int i=0; i<t.size(); i++){
        st.insert(t[i]);
    }

    cout << st.size() << endl;

    set <char> :: iterator itrt = st.begin();

    for(itrt; itrt!=st.end(); itrt++){
        cout << *itrt << " ";
    }

}