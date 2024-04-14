//fill
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int > v(n);
    fill(v.begin(), v.begin()+3, 5);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}