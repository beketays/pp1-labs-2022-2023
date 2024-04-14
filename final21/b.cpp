#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    map <int, int> mp;
    vector <int> v;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        v.push_back(n);
    for(int i=0; i<v.size(); i++) {
        int cnt=0; 
        if(v[i]>0) {
            cnt++;
        }
        mp.insert(make_pair(i+1, cnt));
    }
    }
    map <int, int> ::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++) {
        cout << it->second << " ";
    }



}