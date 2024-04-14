#include <iostream>
using namespace std;
bool degree(int n, int sum){
    if(n == sum){
        return true;   // sum = pow(2,i), и оны салыстр берилген санмен
    }
    if(sum > n){
        return false; // здесь фолс потому что берилген сан=28 меньше нашей суммы
    }
    sum *= 2;
    return degree(n, sum);
}

int main(){
    int n; cin >> n;
    int sum = 1;
    if(degree(n, sum)==true){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}