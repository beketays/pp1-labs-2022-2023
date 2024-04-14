#include <iostream>
#include <string>
using namespace std;
int degree(int n, int ans){
    /*if(n!=0){
        degree(n--; ans);
    }
    else {return ans;[]    
    ans *= 2;
    */
    if(n==0){
        return ans;
    }
    ans*=2;
    degree(n-1,ans);

}

int main (){
    int a;
    cin >> a;
    cout << degree(a,1);
    
}
