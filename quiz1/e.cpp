#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a = sqrt(n);
    int b = sqrt(n);
    if(a==b){
        cout << "Perfecto";
    }
    else{
        cout << "Simple";
    }
}