// next permutation
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int > v(n);
   for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    do{
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    while(next_permutation(v.begin(); v.end()));
}