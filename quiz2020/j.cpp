#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n, m, x=0, y=0;
    cin >> n >> m;
    char a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = 'X';
        }
    }
    for(int i=0; i<s.size(); i++){
       if(s[i]=='D'){
            x++;
            a[x][y]='*';
       }
        else if(s[i]=='U'){
            x--;
            a[x][y]='*';
        }
        else if(s[i]=='R'){
            y++;
            a[x][y]='*';
        }
        else if(s[i]=='L'){
            y--;
            a[x][y]='*';
        }

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = 'X';
        }
    }
    


}