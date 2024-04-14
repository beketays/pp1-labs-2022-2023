#include <iostream>

using namespace std;

bool isPrime(int x){
    for(int i=0; i<=x/2; i++){
        if(x%i == 0){
            return false;  //not prime
        }

    }
    return true; //prime
}

int mai(){
    int n; cin >> n;
    int a=2;
    while(n>0){
        if(isPrime(n) == true){
            n--;
        }
        a++;
    }
    a--;
    cout << a;
}

