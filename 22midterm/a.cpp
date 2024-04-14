#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n]; 
    int l=0, r=0, cntl=0, cntr=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cntl+=a[i];
            l++;
        }
        else{
            cntr+=a[i];
            r++;
        }
    }
    cout << "Left hand magic power: " << (cntl*l) << endl;
    cout << "Right hand magic power: " << (cntr*r);
}
