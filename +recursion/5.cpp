#include <iostream>

using namespace std;

int degree(int n, int sum, int cnt){
    if(n == sum){
        return cnt;
    }
    if(sum > n){
        return -1;
    }
    sum *= 2;
    cnt ++;
    return degree(n, sum, cnt);
}

int main(){
    int n; cin >> n;
    int sum=1, cnt=0;
    if(degree(n,sum,cnt) == -1){
        cout << "Wrong";
        return 0;
    }
    cout << degree(n, sum, cnt);
}