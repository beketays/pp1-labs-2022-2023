#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<m; j++){
            cnt += a[i][j];
        }
        cnt /= m;
        cout << cnt << " ";
    }
}