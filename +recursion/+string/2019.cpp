#include <iostream>

using namespace std;
int find( int a[], int n, int k){
    for(int i=0; i<n; i++){
        if(a[i]==k){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        cnt += find(a[i], m, k);
    }
    cout << cnt;
}