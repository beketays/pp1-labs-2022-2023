#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    set <int>:: iterator it;
    for(it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }

}
