#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cin >>  n;
    if(n%2==0 && n%5==0 || n%17==0 && n%19==0){
        cout << "YES";
    }
    else if(n%2==0 && n%17==0 ||  n%5==0 && n%19==0) {
        cout << "YES";
    }
    else if(n%2==0 && n%19==0 ||  n%5==0 && n%17==0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
