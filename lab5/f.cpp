#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    int l, r;
    string t;
    cin >> s >> l >> r;
    t=s.substr(l,r+1);
    cout <<  t;
    
    /*for(; l<=r; l++){
        cout << s[l];
    }*/
    
       
    

}