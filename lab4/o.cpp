#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n], max = -1000000, x, y;

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(i==j){
                if(max<a[i][j]){
                    max=a[i][j];
                    x=i+1;
                    y=j+1;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with" << " ";
    cout << "coordinates: " << x << ";" << y;
    
}