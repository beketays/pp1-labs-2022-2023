#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, m;
    cin >> n;
    for(int i=1; i<=n; i++){
        m=(pow(i, 2));
        if(m<=n){
            cout << m << endl;
        }
    }
}