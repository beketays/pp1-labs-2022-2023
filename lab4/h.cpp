#include <iostream>
using namespace std;
int main(){
    int n, m, sum = 0, sum2 = 99999999, pos = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum += a[i][j];
        }
        if(sum < sum2){
            sum2 = sum;
            pos = i+1;
        }
        sum=0;
    }
    cout << pos;
        

}