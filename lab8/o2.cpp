#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    string s;
    cin >> s;
    set <char> c;
    for(int i=0; i<s.size(); i++){
        c.insert(tolower(s[i]));
    }

    cout << c.size() << endl;

    set <char> :: iterator it;
    for(it = c.begin(); it!=c.end(); it++){
        cout << *it << " ";
    }
}
