#include <iostream>
using namespace std;
int main() {
    int n, c=1, m=0, size=n;
    cin >> n;
    int a[n][n];
    while(c<=n*n){
        for(int i=m; i<size; i++){
            a[m][i]=c++;
        }
        for(int i=m+1; i<size; i++){
            a[i][size-1]=c++;
        }
        for(int i=size-2; i>=m; i++){
            a[size-1][i]=c++;
        }
        for(int i=size-2; i>m; i--){
            a[i][m]=c++;
        }
        m++;
        size--;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[n][n] << " " << endl;
        }
    }
}