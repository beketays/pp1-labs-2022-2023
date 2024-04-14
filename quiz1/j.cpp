#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    int costa, costb, costc, n;
    cin >> a >> b >> c >> costa >> costb >> costc >> n;
    if(((a*costa) + (b*costb) + (c*costc)) <= n){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}