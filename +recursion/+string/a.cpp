#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>= 'A' && s[i]<='Z'){
            cout << s[i] << " " << i << endl;
            return 0;
        }
    }
    cout << "CHAOS!";
}