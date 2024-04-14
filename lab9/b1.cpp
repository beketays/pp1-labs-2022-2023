#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v, v2;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a%2==0){
            v.push_back(a);
        }
        else {
            v2.push_back(a);
        }
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    for(int i=v.size()-1; i>=0; i--){
        cout << v[i] << " ";
    }
    for(int i=0; i<v.size(); i++){
        cout << v2[i] << " ";
    }

}
