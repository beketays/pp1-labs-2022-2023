#include <iostream>
#include <cmath>
using namespace std;   
int main(){     
    int n, max=0, min=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]<min){
            min=a[i];
        }
        else if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0; i<n; i++){
        cout << a[i];
    }


    

}