// contest F
#include <iostream>

using namespace std;

int main(){
    string s, t;
    getline(cin, s);
    int n; cin >> n;
    s += " ";
    int cnt = 0; 
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(cnt == n-1){
                cout << t;
                return 0;
            }
            else {
                cnt++;
                t = "";
            }
        }
        else{
            t += s[i];
        }
    }
}