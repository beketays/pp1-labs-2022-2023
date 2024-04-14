#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int a = x/1000;
    int b = (x/100) % 10;
    int c = (x%100) / 10;
    int d = x/1000;
    // cout << a << " " << b << " " << c << " " << d;
    if(a==d && b==c){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}