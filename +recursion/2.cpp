#include <iostream>
using namespace std;
void solve(int n){
    if(n == 1){
        return;
    }
    if(n%2 == 0){
        cout << n << endl;
    }
    n = n / 2;
    solve(n);
}

int main(){
    int n;
    cin >> n;
    solve(n);
}