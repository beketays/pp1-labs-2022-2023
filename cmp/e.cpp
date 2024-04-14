#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()){
        cout << "NO";
        return 0;
    }
    sort(s.begin(), s.end());
    do{
        if(s == t){
            cout << "YES";
            return 0;
        }

    }while(next_permutation(s.begin(), s.end()));
    cout << "NO";
    
}