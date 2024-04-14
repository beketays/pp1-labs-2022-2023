#include <iostream>
using namespace std;
int main (){
    int n, a=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int j=0; j<n; j++){
        a=0;
        for(int k=a[j]; j>0; k/=10){
            a += k%10;
        }
        if(a%2==0){
            cout << "Sum of digits is even!" << endl;
        } 
        else{
            cout << "Sum of digits is odd!" << endl;
        }
    }
}