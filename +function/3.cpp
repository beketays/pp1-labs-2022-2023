// polindrome
#include <iostream>
#include <algorithm>
using namespace std;

string polindrome(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return t;
}

int main(){
    string s;
    cin >> s;
    if(s == polindrome(s)){
        cout << "Polindrome";
    }
    else {
        cout << "Not Polindrome";
    }
}