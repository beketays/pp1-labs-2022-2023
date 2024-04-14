// contest B
#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
   char a;
   cin >> a;
   string s, t="";
   cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=a){
            t += s[i];
        }
    }
    cout << t;
}