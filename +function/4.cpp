#include <iostream>
using namespace std;
long long solve(int a[], int n, long long sum){
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    long long sum = 0;
    sum = solve(a, n, sum);
    cout << sum;

}