#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int n, m, d;
    cin >> n >> m >> d;
    for(int i=n; i<=m; i++){
        int x = sqrt(i);
        float y = sqrt(i);
        if(x == y){
            if(d == 1){
                cout << i << " ";
            }
        }
    }
    
    for(int i=m; i>=n; i--){
        int x = sqrt(i);
        float y = sqrt(i);
        if(x == y){
            if(d == -1){
                cout << i << " ";
            }
        }
    }
}