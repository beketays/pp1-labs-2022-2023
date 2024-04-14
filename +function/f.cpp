#include <iostream>

using namespace std;
bool check(int a){
    while(a>0){
        if(a%10 != 3 && a%10 != 8){
            return false;
        }
        a/=10;
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    int a = 3;
    while(a <= n){
        if(check(n) == true){
            cout << a << endl;
        }
        a++;
    }
    cout << check(x);

}