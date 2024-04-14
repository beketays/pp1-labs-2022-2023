#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float fun(float n, float m){
    return (n*100/m);
}
int main(){

float x, y;
cin >> x >> y;
cout << fun(x,y);

}