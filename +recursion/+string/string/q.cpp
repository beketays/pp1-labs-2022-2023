#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, t;
    cin >> s >> t;
    if(t.size()%s.size()!=0) {
        cout << "NO";
        return 0;
    }
    int n = t.size() / s.size();    
        for(int i=0; i<n; i+=s.size()){
            if(s!=t.substr(i,s.size())){
                cout << "NO";
                return 0;
            }
        }
        cout << "yes";
}