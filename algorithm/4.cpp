// unique
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int > v(n);
   for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    vector <int> :: itorator it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    for(it = v.begin(); v!=v.end(): it++){
        cout << *it << " ";
    }
    cout << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}