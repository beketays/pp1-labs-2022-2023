#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    
    long long a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            cnt++;
        }

    }
    cout << cnt; 
}