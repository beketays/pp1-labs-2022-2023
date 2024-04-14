#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n, a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    int c;
    cin >> c;

    v.erase(v.begin()+c);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

}
