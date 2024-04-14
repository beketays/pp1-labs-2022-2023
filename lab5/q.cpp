#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string a;
    for(int i=0; i<t.size()/s.size(); i++){
        a+=s;
    }
    if(a==t){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}