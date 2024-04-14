#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    set <int> std;
    int sum;
    
    for(int i=0; i<n; i++){
        cin >> a;
        std.insert(a);
    }

    set<int> :: iterator it = std.begin();
    for(it; it != std.end(); it++){
        sum += *it;
    }
    cout << sum;


}