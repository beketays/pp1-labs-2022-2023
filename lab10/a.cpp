#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector <string> v;
    vector <int> v2;
    
    for(int i=0; i<n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
        int y;
        cin >> y;
        v2.push_back(y);
    }

    sort(v.begin(), v.end());

    sort(v2.begin(), v2.end());

    for(int i=0; i<n; i++) {
        cout << v[i] << " " << v2[i] << endl;;
    }

}