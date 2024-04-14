#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a[10];
    for(int i=0; i<10; i++){
        a[i]=0;
    }
    for(int i=0; i<s.size(); i++){
        a[s[i] - '0']++;
    }
    int max=0, min=1e9;
    for(int i=0; i<10; i++){
        if(a[i]==0) {
            continue;
        }
            if(a[i]>max){
                max=a[i];
            }
                if(a[i]<min){
                    min=a[i];
                }
    }
        if(max==min){
            cout << "YES";
        }
            else{
                cout << "NO";
            }


}