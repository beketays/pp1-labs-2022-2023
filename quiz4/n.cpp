#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 2;
    while(k <= n) {
        bool check = true;
        for(int i=2; i<=k/2; i++) {
            if(k%i == 0) {
                check = false;
                break;
            }
        }
        if(check == true) {
            cout << k << " is prime" << endl;
        }
        k++;
    }
}