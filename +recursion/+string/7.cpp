#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string str;
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        str += s[i];
        if(str.find(t) != -1){
            cnt ++;
            str = "";
        }
    }
    cout << cnt;
}