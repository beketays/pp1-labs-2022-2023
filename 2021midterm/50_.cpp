#include <iostream>
#include <string>
using namespace std;
int main (){
    string a;
    int cur = 0;
    string b = "";
    getline(cin, a);
    for(int i=0;i<a.size();i++){
        if(a[i]==' '){
            if(cur>2){
                cout << b << " ";
            }
            cur=0;
            b="";
        }
        else{
            cur++;
            b+=a[i];
        }
    }
    if(cur>2){
        cout << b << " ";
    }
    
}