#include <iostream>
using namespace std;
int degree(int n, int ans){
    if(n==0){
        return ans;
    }
    ans*=2;
    return degree(n-1, ans);
}

int main(){
    int n;
    cin >> n;
    cout << degree(n, 1);
}