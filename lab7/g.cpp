#include <iostream>
using namespace std;
int factor(int n){
    if(n==0){
        return 1;
    }
    else {
        return n * factor(n-1);
    }
}
int main(){
    int n; 
    cin >> n;
    cout << factor(n);
}