#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector <int> v;
    while(cin >> n) {
        if(n == 0) {
            break;
        } 
        v.push_back(n);
    }
    for(int i=0; i<v.size(); i++) {
        int sum = 0;
        if(v.size()%2 == 0) {
            sum += v[i] + v[v.size()-1];
        } 
        cout << sum << " ";
    }

}