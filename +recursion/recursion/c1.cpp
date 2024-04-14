#include <iostream>
#include <cmath>
using namespace std;

int a[1000];
void search(int l, int r, int mid, int t){
    if(l>=r){
        cout << "No";
        return;
    }
        mid=((l+r)/2);
        if(t==a[mid]){
            cout << "Yes";
            return;
        }
        else if(a[mid]<t){
            l = mid+1;
        }
        else if(a[mid]>t){
            r = mid-1;
        }
    
        search(l, r, mid, t);
    }



int main(){
    int n, k;
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin >> k;
    search(0,n-1,0,k);
}