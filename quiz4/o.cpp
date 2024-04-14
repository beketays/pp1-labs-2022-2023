#include <iostream> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    int max = a[0][0], x=0, y=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                if(a[i][j] > max) {
                    max = a[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }
    cout << "Max elem is: " << max << " with coor: " << x+1 << ";" << y+1;
}