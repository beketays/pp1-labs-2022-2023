#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    char c[100000000];
    int x=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<s[i].size(); j++){
            if(s[i][j] != '0'){
                c[x] = s[i][j];
                x++;
            }
        }
    }
    int a = 0;
    for(int i=0;i<x/2;i++){
        if(c[i] != c[x-1-a]){
            cout << "NO";
            return 0;
        }
        a++;
    }
    cout << "YES";
}
