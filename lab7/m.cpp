#include <iostream>
using namespace std;
void rec(int n, int m){
    if(m>n){
        return;
    }
    cout << m << " ";
    return rec(n, m+1);
}
int main(){
    int n;
    cin >> n;
    rec(n, 1);
}