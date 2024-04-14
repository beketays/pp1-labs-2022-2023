#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a = n % 2;
    n = n / 2;
    int b = n % 2;
    n = n / 2;
    int c = n % 2;
    n = n / 2;
    int d = n % 2;
    // cout << a << b << c << d << endl;
    int sum = a * 8 + b * 4 + c * 2 + d * 1;
    cout << sum << endl;
    // cout << n % 2 * 8 + n % 2 * 4;
}
