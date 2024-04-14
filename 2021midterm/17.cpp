#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, m, b;
    cin >> n >> m >> b;
    int a = m + n;

    if((b/a) * 100 < a * 0.1){
        cout << "Boris, you are punished!";
    }
    else if((b/a) * 100 > a * 0.1){
        cout << "You are my sweet baby";
    }
    }