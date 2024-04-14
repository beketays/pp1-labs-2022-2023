#include <iostream>
#include <string>
using namespace std;
int func(string s, int i, int ans=0){
    if(i==s.size()){
        cout << ans;
    }
    ans+=int(s[i])-48;
    cout << ans << " ";
    func(s, i+1, ans);
    
}

int main (){
    string  n;
    cin >> n;
    cout << func(s, i+1, ans)
    
}