#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set <int> st;
    int n, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        st.insert(a);
    }
    cout << st.size();

}