#include <iostream>
using namespace std;
int hater(string s, int i, int sum){
    if(i==s.size()){
        return sum;
    }
    sum += (s[i]-48)/2;
    return hater(s, i+1, sum);
    
}
int main(){
    string s;
    cin >> s;
    cout << hater(s, 0, 0);

}