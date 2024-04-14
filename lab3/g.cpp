#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    long long  a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int m = a[0];
    for(int i=0; i<n; i++){
        if(m < a[i]){
            m = a[i];
        }
    }
    int k = a[0];
    for(int i=0; i<n; i++){
        if(k > a[i]){
            k = a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i] == m){
            a[i] = k;
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}