#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, sum;
    cin >> n >> m;
    sum = n + (m%10) + (m/100);
    cout << sum;


}