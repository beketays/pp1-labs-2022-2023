#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    long long m;
    cin >> n >> m;
    long long a[n];
    int c;

    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    for(int i=1; i<=n; i++){
        if(m>=a[i]){
            c=i;
        }
    }
    cout << c;
}