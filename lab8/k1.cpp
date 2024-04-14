#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    vector<int> v;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
        sum+=a;
    }
    sort(v.begin(), v.end());
    int k; cin >> k;
    for(int i=0; i<n-k; i++){
        sum -= v[i];
    }
    cout << sum;
}