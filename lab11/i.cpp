#include <iostream> 
#include <algorithm>

using namespace std;

bool Palindrome(string s){
    string t = s;
    reverse(s.begin(), s.end());
    return t == s;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do{
        if(Palindrome(s)){
            cout << "ZA WARUDO TOKI WO TOMARE" << endl;
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));
    cout << "JOJO";
    return 0;
}