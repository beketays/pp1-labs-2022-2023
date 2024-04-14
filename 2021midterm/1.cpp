#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, a=0, cnt=0;
    cin >> n;
    while(a<=n){
        int b=a;
        while(b>=2){
        if(b%2 == 1) {
            cnt++;
        }
        b/=2;
        }
            if(b==1){
                cnt++;
            }
    cout << cnt << " ";
    cnt=0;
    a++;
     

    
    }
    //return 0;
}