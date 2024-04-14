#include <iostream>

using namespace std;
int main(){
    string s;
    int n, m;
    cin >> s >> n >> m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = 'X';
        }
    }
    int i=0; 
    int j=0; 
    arr[0][0] = '*';
    for(int a=0; a<s.size(); a++){
        if(s[a] == 'D'){
            i++;
            arr[i][j] = '*';
        }
        if(s[a] == 'U'){
            i--;
            arr[i][j] = '*';
        }
        if(s[a] == 'R'){
            j++;
            arr[i][j] = '*';
        }
        if(s[a] == 'L'){
            j--;
            arr[i][j] = '*';
        }
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

}