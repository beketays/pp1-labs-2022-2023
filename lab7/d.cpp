#include <iostream>
using namespace std;

int sum_of_dig(string s,int sum, int i){
    if(i == s.size()){
        return sum;
    }
    sum += s[i] - 48;
    return sum_of_dig(s, sum, i+1);
}

int main(){
    string n; cin >> n;
    int sum = 0;
    int i = 0;
    cout << sum_of_dig(n, sum, i);
}