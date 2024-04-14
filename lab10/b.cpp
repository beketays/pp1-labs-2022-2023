#include <iostream>



using namespace std;

    int pow(long long number,int i,int n) {
        cout << number << " ";
        number = 1;
        if(i<n) {
            i++;
            for(int j=1; j<=i; j++) {
                number *= i;
            }
            pow(number,i,n);
        }
    }

    int main() {
        int n;
        cin >> n;

        pow(1,0,n);
    }