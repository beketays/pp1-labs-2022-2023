#include  <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int i = 0;
    int j = 0;
    int k = n * m;
    while(j<m){
        while(i<n){
            a[i][j] = k;
            i++;
            k--;
        }
        i--;
        j++;
        if(j == m){
            break;
        }
        while(i>=0){
            a[i][j]=k;
            i--;
            k--;
        }
        i++;
        j++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}