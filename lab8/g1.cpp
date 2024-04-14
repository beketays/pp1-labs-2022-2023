#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool primes(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, a; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    int p, cnt = 0; cin >> p;
    for(int i=0; i<v[i]; i++){
        if(v[i] > p && primes(v[i])){
            cnt++; 
        }
    }
    cout << cnt;
}