#include <iostream>
#include <map>
using namespace std;
int main(){
    string s, t;
    s += " ";
    getline(cin, s);
    map <char,int> mp;
    for(char a = 'a'; a <= 'z'; a++){
        mp[a]=0;
    }
    for(int i=0; i<s.size(); i++){
        char a = tolower(s[i]);
        if(s[i] >= 'a' && s[i] <= 'z'){
            mp[a]++;
        }
    }
    map <char,int> ::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " : " << it->second << endl;
    }
    
}