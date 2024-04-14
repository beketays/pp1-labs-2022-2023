#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
int n;
cin >> n;
string a;

vector <string> v;
set <string> s;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
    s.insert(a);
}

set <string>::iterator it=s.begin();
int cnt=0;

while(it!=s.end()){
    for(int i=0;i<n;i++){
        if(*it==v[i]){
            cnt=i;
            break;
        }
    }
    cout << *it << " " << cnt+1 << endl;
    it++;
}
}
  