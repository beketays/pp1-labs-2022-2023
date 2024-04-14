#include <iostream>
using namespace std;

/*string toup(string s){
    for(int i=0;i<s.size();i++){
        if(i%2==0 && s[i]>=97 && s[i]<=122){
            s[i]-=32;
        }
    }
    return(s);
}*/

int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }
}