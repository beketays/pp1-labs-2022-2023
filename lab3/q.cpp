#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n;
    cin >> n;

    bool ok = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout << "NO";
            ok = false;
            break;
        }
    }

    if(ok==true){
        cout << "YES";
    }
    return 0;
}