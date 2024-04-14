#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a[n], sum;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }

    for(int i=0; i<n; i++){
        if((a[i+1]-a[i]-1)!=0 && (i+1)<n){
            sum+=(a[i+1]-a[i]-1);
        }  
    }
    
    cout << sum;
    

}