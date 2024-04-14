#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a, cnt;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        if(a%10 == 7){
            cnt++;
        }
    }
    cout << cnt;
}