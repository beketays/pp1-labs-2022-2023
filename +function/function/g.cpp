#include <iostream>
#include <cmath>
using namespace std;
string s(string b){
    string a = "";
    for(int i=0; i<b.size(); i++){
        if(b[i]!= 'a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u' && b[i]!= 'A' && b[i]!= 'E' && b[i]!='I' && b[i]!='O'&& b[i]!='U') {
            a+=b[i];
        }
    }
    return (a);
}
int main() {
    string a;
    getline(cin,a);
    cout << s(a);
}

