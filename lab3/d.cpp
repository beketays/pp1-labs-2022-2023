#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, maxi = -1000000002;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int pos=0;
    for(int i=0; i<n; i++){
        if(a[i]>maxi){
            maxi=a[i];
            pos=i+1;
        }
    }
    
    cout << pos;
}