#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair <int,int> a[n];
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        a[i].first = x+y;
        a[i].second = i+1;
    }
    sort(a, a+n);
    for(int i=0; i<n; i++){
        cout << a[i].second << " ";
    }
}
