// Given n integers. In this task, you should find the maximum from these numbers.
#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n, a, max = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        if(max < a){
            max = a;
        }
    }
    cout << max;
}