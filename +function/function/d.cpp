#include <iostream>
#include <cmath>
using namespace std;
bool fun(int a[], int n, int b){
    for(int i=0; i<n; i++){
        if(a[i]==b)
        return true;
    }
    return false;
}
int main(){
    int n, b;
    cin >> n;
    int o[n];
    for(int i=0; i<n; i++){
        cin >> o[i];
    }
    cin >> b;

    if(fun(o, n, b)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}