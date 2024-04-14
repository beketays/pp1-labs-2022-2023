#include <iostream>
using namespace std;

int main(){

int n; 
cin >> n;
int a[n];

for(int i=0;i<n;i++){
    cin >> a[i];
}

int b[1000];
for(int i=0;i<=1000;i++){
    b[i]=0;
}

for(int i=0;i<n;i++){
    for(int j=0;j<=1000;j++){
        if(a[i]==j){
            b[j]++;
        }
    }
}

int max=-1;

for(int i=0;i<=1000;i++){
    if(b[i]>max){
        max=b[i];
    }
}

for(int i=1000;i>=0;i--){
    if(b[i]==max){
       cout << i << " ";
    }
}


}