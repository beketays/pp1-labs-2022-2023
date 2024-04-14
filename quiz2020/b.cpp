#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){
            cin >> a[i][i];
        }
    }

     for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){
            if(i==1 && i==n){
                cout << a[1][n];
        }
    }
    }
    cout << a[1][n];


}
