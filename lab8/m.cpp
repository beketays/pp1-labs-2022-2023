#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
set <int> s;
int a, n;
cin >> n;

int sum=0;
for(int i=0;i<n;i++){
    cin >> a;
    s.insert(a);
}
set <int>:: iterator it = s.begin();

while(it != s.end()){
    sum += (*it);
    it++;
}

cout << sum;

}
