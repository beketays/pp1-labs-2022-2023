#include <iostream>
#include <cmath>
using namespace std;
int m = -1000000;
int max(int a[4]){
    for(int i=0; i<4; i++){
        if(a[i]>m){
            m=a[i];
        }
    }
    return (m);
}

int main(){
    int s[4];
    for(int i=0; i<4; i++){
        cin >> s[i];
    }
    cout << max(s);
}
