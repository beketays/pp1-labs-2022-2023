#include <iostream>
using namespace std;
/*int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i=0; i<s.size(); i++){
        if()
    }
    cout << s;*/
    int main(){
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    while(k--){
        for(int i = 0; i < s.size(); ++i){
            if(s[i] > 'A' && s[i] <=  'Z')
                s[i] = char(int(s[i]) - 1);
            else if(s[i] == 'A')
                s[i] = 'Z';
        }
    }
    cout << s;
    return 0;
}