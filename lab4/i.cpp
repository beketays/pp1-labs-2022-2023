
#include <iostream>
#include <cmath>
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
        for(int j=0; j<m; j++){                             
    for(int i=0; i<n; i++){
            if(ceil(sqrt(a[i][j]))==floor(sqrt(a[i][j]))){
                a[i][j] = sqrt(a[i][j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
    }

      // if(ceil(sqrt(n))==floor(sqrt(n))){
}
    


