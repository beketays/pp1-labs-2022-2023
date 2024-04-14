#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a;
    for(int i=0; i<=n; i++){
        a = pow(2,i);
        cout << a << endl;
    }
}