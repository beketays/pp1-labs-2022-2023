#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair <string,int> p1, pair <string,int> p2){
    if(p1.first > p2.first){
        return true;
    }
    if(p1.first < p2.first){
        return false;   // поменять стринги местами
    }
    if(p1.first == p2.first){
        if(p1.second > p2.second){
            return true;
        }
    }
    return true;
}
int main(){
    int n; cin >> n;
    vector <pair <string, int> > v;
    for(int i=0; i<n; i++){
        string s;
        int x; cin >> s >> x;
        v.push_back(make_pair(s,x));
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}