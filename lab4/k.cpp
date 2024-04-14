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
    int sum = 0, sum2 = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum += a[i][j];
        }
        cout << "The sum of row number " << i+1 << " is " << sum << endl;
        sum=0;
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            sum2 += a[i][j];
        }
        cout << "The sum of column number " << j+1 << " is " << sum2 << endl;
        sum2 = 0;
    }


}