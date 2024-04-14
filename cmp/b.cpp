#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <char,int> mp;
    for(char a='a'; a<='z'; a++){
        mp[a] = 0;
    }
    for(char a='A'; a<='Z'; a++){
        mp[a] = 0;
    }
    for(char a='0'; a<='9'; a++){
        mp[a] = 0;
    }
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<s.size(); j++){
            mp[s[j]]++;
        }
    }
    map <char,int> :: iterator it;
    vector<char> v1;
    vector<char> v2;
    vector<char> v3;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(it->second == 0){
            if(it->first >= 'a' && it->first <= 'z'){
                v1.push_back(it->first);
            }
            if(it->first >= 'A' && it->first <= 'Z'){
                v2.push_back(it->first);
            }
            if(it->first>='0' && it->first<='9'){
                v3.push_back(it->first);
            }
        }
    }
    cout << "Lower case: ";
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }
    
    cout << endl <<  "Upper case: ";
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl <<  "Numbers: ";
    for(int i=0; i<v3.size(); i++){
        cout << v3[i] << " ";
    }

}