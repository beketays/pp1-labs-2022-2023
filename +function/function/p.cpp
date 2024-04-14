#include <iostream>
#include <cmath>
using namespace std;
int fun(int n){
    if(n>0){
    return n;
    }
    else{
        return (abs(n));
    }
     return n;
}
int main(){
    int n;
    cin >> n;
    cout << fun(n);
}
