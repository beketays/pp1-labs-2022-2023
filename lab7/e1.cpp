#include <iostream>

using namespace std;

string uniq(int a){
    if(a==1){
        return "Yes";
    }
    else if(a%2!=0){
        return "No";
    }
    return uniq(a/2);
}

int main(){

int a;
cin >> a;

cout << uniq(a);
}