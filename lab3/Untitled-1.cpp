#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    int arr[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    cin >> b;
    arr[a+b];
    for(int i = a; i < a+b; i++){
        cin << arr[i];
    }
    return 0;
}