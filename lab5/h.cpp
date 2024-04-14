#include <iostream>
using namespace std;

int main (){
    string s;
    cin >> s;
    int a[10];
    for(int i=0; i<10; i++){
        a[i]=0;
    }
    for(int i=0; i<s.size(); i++){
        a[s[i]-48]+=1;
    }
    for(int i=0; i<10; i++){
        for(int j=i; j<10; j++){
            if(a[i]!=0 && a[j]!=0 && a[j]!=a[i]){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
