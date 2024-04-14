#include <iostream>
using namespace std;
int main (){
    int n, d1=0, d2=0, sum=0;
    cin >> n;
    int a = n%10;
    int b = n/10%10;
    int c = n/100%10;
    d1 = a+b+c;
    d2 = a*b*c;
    sum = d1+d2;
    //cout << a << " " << b << " " << c;
    cout << sum;
}
