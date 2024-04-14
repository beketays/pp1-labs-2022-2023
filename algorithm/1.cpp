// count if
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool check(int a){
    if(a > 10){
        return true;
    }
    else {
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int cnt =  count_if(v.begin(), v.end(), check);
    cout << cnt;
}