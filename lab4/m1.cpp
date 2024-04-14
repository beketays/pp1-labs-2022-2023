#include <iostream>
using namespace std;
int main() {
    int n, iter, x=0, y=0, cnt=1;
    cin >> n;
    if(n==1){
        cout << "1";
        return 0;
    }
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
    for(int iter=0; iter<n-1; iter++){
        for(int i=iter; i<n-iter; i++){
            a[iter][i]=cnt;
            cnt++;
        }
        for(int i=iter+1; i<n-iter; i++){
            a[i][n-1-iter]=cnt;
            cnt++;
        }
        for(int i=n-2-iter; i>=iter; i--){
            a[n-1-iter][i]=cnt;
            cnt++;
        }
        for(int i=n-2-iter; i>iter; i--){
            a[i][iter]=cnt;
            cnt++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j] << " " << endl;
        }
    }
    return 0;

}