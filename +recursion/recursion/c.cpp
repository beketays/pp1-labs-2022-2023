#include <iostream>

using namespace std;

int a[1000];
string search(int i, int n, int san){
    if(i==n){
        return "NO";
    }
    else if(a[i]==san){
        return "YES";
    }
    else{
        return search(i+1,n,san);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<search(0,n,k);
}