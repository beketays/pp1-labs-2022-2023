#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    map<pair<pair<string, int>, pair<string, int> >, int> mp;
    int n;
    cin >> n;
    string s1, s2;
    int x1, x2;
    for(int i = 0; i < n; i++){
        cin >> s1 >> x1 >> s2 >> x2;
        mp[make_pair(make_pair(s1, x1), make_pair(s2, x2))] = x1 + x2; 
    }
    map<pair<pair<string, int>, pair<string, int> >, int> :: iterator it = mp.begin();
    for(it; it != mp.end(); it++){
        cout << it -> first.first.first << " and " << it -> first.second.first << " " << it -> second << endl;
    }
}