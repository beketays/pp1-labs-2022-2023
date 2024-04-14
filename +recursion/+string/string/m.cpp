#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s, x;
    int n;
    cin >> s >> x >> n;
    int sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==x[0]){
            sum+=1;
        }
    }
    if(sum==n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}