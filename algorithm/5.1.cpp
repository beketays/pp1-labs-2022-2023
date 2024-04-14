// next permutation
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    do{
        if(s == t){
            cout << "YES";
            return 0;
        }
        cout << s << endl;
    }
    while(next_permitation(s.begin(), s.end()));
    cout << "NO";

}