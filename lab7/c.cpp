#include <iostream>

using namespace std;

void search(int n, int a[], int x){
    if(a[n] == x){
        cout << "Yes";
        return;

    }
    else if(n == 0){
        cout << "No";
        return;
    }
    search(n-1, a, x);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    search(n, a, x);
}