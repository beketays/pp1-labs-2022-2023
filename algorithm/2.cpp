//rotate
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    rotate(v.begin(), v.begin()+4, v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}