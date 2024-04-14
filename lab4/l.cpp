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
    cout << "coordinates of min elements:" << endl;
    int posx=0, posy=0;
    int sum = 0, min = 1000000002;
    for(int i=0; i<m; i++){
        min = 1000000002;
        for(int j=0; j<n; j++){
            if(min>a[j][i]){
                posx = i;
                posy = j;
                min = a[j][i];
            }
        }
    sum += min;
    cout << posy+1 << ";" << posx+1 << endl;
    }
    cout << endl;
    cout << "Their sum:" << endl << sum;


}