#include <iostream>
using namespace std;
int main (){
    
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    long long sum=0;
    for(int i=l; i<=r; i++){
        sum = sum + a[i];
    }
    cout << sum;

}