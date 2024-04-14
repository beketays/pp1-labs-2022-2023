#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, k = 0;
    cin >> a >> b;
    bool x = false;

    for(int i=-60; i<=60; i++){
        if(pow(2,i)==(b/a)){
            x = true;
            k = i;
        }
    }
    
    if(x == 1){
        cout << "YES " << k;
    }
    else {
        cout << "NO";
    }
    
}