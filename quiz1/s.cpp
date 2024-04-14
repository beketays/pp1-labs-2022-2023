#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    cin >> a >> b >> c;
    //if((a==b && a!=c) || (b==c && b!=a)|| (a==c && a!=b)){ (кате, кпц)
    if(a==b || b==c || a==c ){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}