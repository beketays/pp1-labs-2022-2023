#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        b[i]= pow(a[i],2);
        cout << b[i] << " ";
    }

}