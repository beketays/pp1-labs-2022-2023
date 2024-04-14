#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, m, cnt1=0, cnt2=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;

        if(m%2 == 0){
            
            cnt1++;
        }

        else if(m%2 != 0){
            
            cnt2++;
        }

    }
    
    cout << cnt1 << " " << cnt2;
}