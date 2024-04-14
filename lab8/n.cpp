#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){

    int n, a;
    cin >> n;
    set<int> st;

    for(int i=0; i<n; i++){
        cin >> a;
        st.insert(a);
    }
    
    set<int> :: iterator it = st.begin();
    for(it; it != st.end(); it++){
        if(*it%2!=0){
            cout << *it << " ";
        }
    }
}