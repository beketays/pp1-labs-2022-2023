#include <iostream>
using namespace std;

int cnt(int x, int y){
    return(abs(x-y));
}

int main (){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=0; i<n; i++){
        cout << cnt(a[i],b[i]) << " ";
    }

}