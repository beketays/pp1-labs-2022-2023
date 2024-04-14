#include <iostream>
using namespace std;
void mas(int arr[], int n, int i){
    if(i == n){
        return;
    }
    cout << arr[i] << " ";
    i++;
    mas(arr, n, i);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int i = 0;
    mas(arr, n, i);
}