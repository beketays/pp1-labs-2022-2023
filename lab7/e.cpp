#include <iostream>

using namespace std;

string divider(int n){
    if(n==1){
        return "Yes";
    }
    else if(n%2!=0){
        return "No";
    }
    return divider(n/2);

}

int main(){
    int n;
    cin >> n;
    cout << divider(n);
}
