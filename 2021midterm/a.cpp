#include <iostream>
#include <bitset>
using namespace std;
int main (){
    int n, b, cnt=0, ii;
    string a;
    cin >> n;

    for(int i =0;i<=n;i++) {
        ii = i;
        while(ii!=0) {
            b = ii%2;
            a = char(b) + a;
            ii /=2;
        }


        for(int j =0;j<a.size();j++) {
            if(a[j] == 1 ) cnt++;
        }
        if(i==n) cout << cnt;
        else cout << cnt << ",";
        cnt=0;
        a = "";

    }

}
    
    /* int a = n % 2;
    n = n / 2;
    int b = n % 2;
    n = n / 2;
    int c = n % 2;
    n = n / 2;
    cout << a << b << c << endl;
    int sum = a + b + c;
    cout << sum;
    */

