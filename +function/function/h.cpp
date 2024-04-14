#include <iostream>
#include <cmath>
using namespace std;

int sum=0;
string even(string x){
    for(int i=0; i<x.size(); i++){
        if(x[i]%2==0){
            sum+=1;
        }
    }
    if(sum==x.size()){
        return ("Valid");
    }
    else {
        return ("Not Valid");
    }
}
int main(){
    string s;
    cin >> s;

    cout << even(s);
}
    
