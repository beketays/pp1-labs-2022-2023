#include <iostream>
using namespace std;
long long inf(int sum){
    int n; cin >> n;
    sum+=n;
    if(n==0){
        return sum;
    }
    return inf(sum);
}
int main(){
    cout << inf(0);

}
