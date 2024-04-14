#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, cnt;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> m;
        if(m%100 == 0){
            cnt++;
        }
        else if(m%10 == 0){
            cnt++;
        }
        
    }
    cout << cnt;
}