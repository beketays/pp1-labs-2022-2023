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
    float x; 
    int y;
    for(int j=0; j<m; j++){                             
        for(int i=0; i<n; i++){
            x = sqrt(a[i][j]);
            y = sqrt(a[i][j]);
            if(x == y){
                a[i][j] = y;
            }
            else if(y!=x){
                a[i][j] = a[i][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
    }
}