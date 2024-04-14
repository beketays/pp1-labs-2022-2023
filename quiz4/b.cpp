#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<pair<int,int>,int> mp;
    
    for(int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        if(mp[{x,y}] != 0 || mp[{y,x}] != 0) { 
            cout << mp[{x,y}] << endl;
        }
        else {
            cout << 0 << endl;
        }
        mp[{x,y}]++;
        mp[{y,x}]++;
    }

}


