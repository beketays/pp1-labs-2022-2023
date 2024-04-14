#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int max = s[0]-48;
    for(int i=0; i<s.size(); i++){
        if(s[i]-48>max){
            max=s[i]-48;
        }
    }

    cout << max << " ";

    int min = s[0]-48;
     for(int i=0; i<s.size(); i++){
        if(s[i]-48<min){
            min=s[i]-48;
        }
    }

    cout << min;
}