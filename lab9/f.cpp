#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack <char> stck;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            stck.push(s[i]);
        }
        else if(stck.empty() && s[i]==')'){
                cout << "NO\n";
                return 0;
        }
        else if(s[i] == ')' && stck.top() == '('){
            stck.pop();
        }
    }
    if(stck.empty()){
        cout << "YES";
    }
    else {
        cout << "NO";
    }


}
