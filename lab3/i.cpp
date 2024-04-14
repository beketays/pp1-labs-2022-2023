#include <iostream>
#include <cmath>
using namespace std;
int main (){

    int n, l, r;
    cin >> n >> l >> r;

    long long a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=1; i<l; i++){
        cout << a[i] << " ";
    }

    for(int i=r; i>=l; i--){
        cout << a[i] << " ";
        }

    for(int i=r+1; i<=n; i++){
        cout << a[i] << " ";
    }

}
