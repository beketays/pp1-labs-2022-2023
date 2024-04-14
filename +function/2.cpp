// дан массив, нужно вывести простые числа
#include <iostream>

using namespace std;

bool isPrime(int x){
    for(int i=2; i*i<=x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        
        if(isPrime(a[i]) == true){
            cout << a[i] << " ";
        }
    }
}