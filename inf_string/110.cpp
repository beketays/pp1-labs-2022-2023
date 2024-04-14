#include <iostream>
using namespace std;
int main(){
    string t, s;
    cin >> t >> s;
    if(t.find(s) < t.size()){
        cout << "yes";
    }
    else if(t.find(s)==t.size()){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    /*for(int i=0; i<s.size(); i++){
        if(s.substr(0,s.size()) == t){
            cout << "yes";
            return 0;
        }
    }
    cout << "no";*/
}