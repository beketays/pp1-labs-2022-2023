#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    int k, l;
    cin >> k >> l;
    v.erase(v.begin()+k, v.begin()+l+1);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }


}