#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n*2-1][n];
    int k = n+1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n*2-1; j++){
            if(i+j >= n-1 && i+j < k-1){
                cout << "*";
            }
            else{
                cout << ".";
            }
        }
        k+=2;
        cout << endl;
    }
}
