#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x, y;
    for(int i=0; i<s.size(); i++){
        if(i==0 && i%2==0){
            x++;
        }
        else{
            y++;
        }
    }
    if(x==y){
        cout << "YES";
    }
    else if(x+)
    else{
        cout << "NO";
    }
}