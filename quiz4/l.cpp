#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    cout << "coordinates:" << endl;

    while(j<m) {
        int min = 999999;
        int x, y;
            for(int i=0; j<n; i++) {
                if(a[j][i] < min) {
                    min = a[j][i];
                    x = i+1;
                    y = j+1;
                }
            }
        cout << x << ";" << y << endl;
        su, += min;
        j++;

    }

    cout << "Their sum:" << endl << sum;


}