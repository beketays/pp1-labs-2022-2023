#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int b[n];
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int x; cin >> x;
    int cnt = 0;

    for(int i=0; i<n; i++){
        if(x >= a[i] && x <= b[i]){
            cnt ++;
        }
    }
    cout << cnt;
    
}