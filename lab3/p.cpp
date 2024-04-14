#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    cin >> n;
    double x = sqrt(n);
    int a = sqrt(n);
    if(x==a){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

}