#include <iostream>
using namespace std;
char max_dig(string s, int i, char maxi){
    if(i==s.size()){
        return maxi;
    }
    if(s[i]>maxi){
        maxi=s[i];
    }
    return max_dig(s, i+1, maxi);
}

int main(){
    string k;
    cin >> k;
    
    cout << max_dig(k, 0, -1);
}
