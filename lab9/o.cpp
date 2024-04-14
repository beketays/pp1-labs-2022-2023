#include <iostream>
#include <algorithm>
using namespace std;

int main(){

int n;
cin >> n;
pair <string,string> user[n];

for(int i=0;i<n;i++){
    cin >> user[i].first >> user[i].second;
}

int m;
cin >> m;
pair <string,string> reg[m];

for(int i=0;i<m;i++){
    cin >> reg[i].first >> reg[i].second;
}

bool x=false, y=false;

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(reg[i].first==user[j].first){
                x=true;
            if(reg[i].second==user[j].second){
                y=true;
            }
            else{
                y=false;
            }
        }
    }
        if(y==true && x==true){
                cout << "correct password" << endl;
        }
        else if(y==false && x==true){
                cout << "password error" << endl;
        }
        if(x==false){
            cout << "login error" << endl;
        }
        y=false;
        x=false;
}
}