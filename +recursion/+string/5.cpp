
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s;
    /*for(int i=s.size()-1; i>=0; i--){
        cout << s[i];
    }
    */
}