#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
bool isPrime(int n){
    if(n == 1){
        return false;
    }
    else for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k; cin >> k;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > k && isPrime(v[i])){
            cnt++;
        }
    }
    cout << cnt;
}
