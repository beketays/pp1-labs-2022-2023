#include <iostream>

using namespace std;

bool search(int n, int a[], int x){
    for(int i=0; i<n; i++){
        if(x == a[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    if(search(n, a, x)==true){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}