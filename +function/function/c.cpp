#include <iostream>
#include <cmath>
using namespace std;
int sum=0;
int fun(int a[ ], int b[ ], int n){
    int c[101];
    int d[101];
        for(int i=1; i<101; i++){
            c[i]=0;
            d[i]=0;
        }
        for(int i=0; i<n; i++){
            c[a[i]]++;
        }
        for(int i=0; i<n; i++){
            d[b[i]]++;
        }
        for(int i=0)
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
     for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    cout << fun(a, b, n);
}