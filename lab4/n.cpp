#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, a, sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        a=i;
        for(int j=1; j<=a; j++){
            if(a%j==0){
                sum += j;
            }
        }
        if(sum == a+1){
            cout << a << " " << "is prime" << endl;
            sum=0;
        }
        else {
            sum=0;
        }
    }
}