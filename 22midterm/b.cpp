#include <iostream>
using namespace std;

int main(){

int w,h;
cin >> w >> h;
int n;
cin >> n;
int b[n][4];                    //coordinates
int a[h][w];                    //canvas

for(int i=0;i<n;i++){           //coordinates
    for(int j=0;j<4;j++){
        cin >> b[i][j];
    }
}

for(int i=0;i<h;i++){           //canvas
    for(int j=0;j<w;j++){
        a[i][j]=0;
    }
}

for(int c=0;c<n;c++){                           //закрашенные области заменяем единицой
    for(int i=b[c][0];i<b[c][2];i++){
        for(int j=b[c][1];j<b[c][3];j++){
            a[i][j]=1;
        }
    }
}

int s=0;
for(int i=0;i<h;i++){                           // считаем не закрашенные области
    for(int j=0;j<w;j++){
        if(a[i][j]==0){
            s++;
        }
    }
}
cout << s;
}