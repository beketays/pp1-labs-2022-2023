#include <iostream>
#include <cmath>
using namespace std;
int sum=0;
int fun(int a){
    while(a!=0){
        sum += a%10;
        a/=10;
    }
    return (sum);
}
int main (){
    int a;
    cin >> a;
    cout << fun(a);
}




   
