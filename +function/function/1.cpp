#include <iostream>

#include <cmath>

using namespace std;
int gip(int x, int y){
    return (sqrt(x*x+y*y));
}
int main(){
    cout << gip(3,4); 
}