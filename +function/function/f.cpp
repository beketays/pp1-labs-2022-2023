#include <iostream>
#include <cmath>
using namespace std;
bool s(string b, int n){
    int m=0;
    for(int i=0; i<b.size(); i++){
        if(b[i]>=48 && b[i]<=57){
            m++;
        }
    }
    if(m>=n){
       return true;
    }
    else {
        return false;
    }
}
int main (){
    int n;
    string a;
    cin >> a >> n;
   if(s(a,n)){
    cout << "YES";
   }
    else {
        cout << "NO";
    }
}