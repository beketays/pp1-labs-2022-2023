#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum=0;
    for(int i=1; i<s.size(); i++){
        sum+=s[i]-48;
    }
    if(sum%10==s[0]-48){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

}