#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n, k;
    cin >> n >> k;
    reverse(s.begin()+n-1, s.begin()+k);
    cout << s;   
}
