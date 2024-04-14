#include <iostream>
#include <map>

using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    map <int, int> mp;

    for(int i=0; i<n; i++){
       int a;
       cin >> a;
       mp[a]++;
    }
    map <int, int> ::iterator its;
    for( its = mp.begin(); its != mp.end(); its++){
        if(its -> second > 1){
            cnt ++;
        }
    }
    cout << cnt;
}