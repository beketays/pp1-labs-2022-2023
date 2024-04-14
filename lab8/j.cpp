#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    int k;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        k = v[v.size()-1] - v[0];
    }
    cout << k;
}