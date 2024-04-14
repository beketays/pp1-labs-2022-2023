#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> s;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        s.insert(a);
    }
    
    set <int> ::iterator it = s.begin();
    while(it != s.end()){
        if((*it)%2 == 1){
        cout << *it << " ";
           
        }
        it++;

    }
}
