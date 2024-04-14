#include <iostream>

#include <set>

#include <map>


using namespace std;

int main() {
    int n; cin >> n;
    
    map<string, set<int> > mp;

    int total = 0;

    for(int i = 0; i < n; i++) {
        string name;
        int att;
        cin >> name >> att;
        mp[name].insert(att);
    }

    for(auto s : mp) {
        cout << s.first << " ";
        if(s.second.size() < 3) {
            cout << "NO BONUS" << endl;
        }
        else{
            cout << "+1" << endl;
        }
    }
}