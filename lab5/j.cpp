#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        for(int j=s.size()-1; j>=0; j++){
            t+=s[i];
            t = s+s[0];
            if(s==t){
                cout << "YES";
                return 0;
            }
            else {
                cout << "NO";
                return 0;
            }
        }

    }
    
}