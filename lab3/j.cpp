#include <iostream>
using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    
    long long a[n];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }   

    for(int i=1; i<=n; i++){
        if(m!=a[i]){
            cout << n;
        
        }
        else if(m==a[i]){
            cout << i;
            return 0;
        }
        
    }   
    
    return 0;
}