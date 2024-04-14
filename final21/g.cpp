#include <iostream> 
#include <algorithm> 
#include <cmath> 
#include <map> 
using namespace std; 
int main(){ 
    int n,m;
    cin>>n>>m; 
    int a[n][m]; 
    map<int,int> mp; 
    size_t cnt=0; 
    bool ok=false; 
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){ 
            cin>>a[i][j]; 
            if(a[i][j]>0){ 
                cnt++; 
            } 
        } 
        mp.insert(make_pair(i+1,cnt)); 
        cnt=0; 
    } 
    int mx=-999999; 
    int b; 
    map<int,int> ::iterator it=mp.begin(); 
    for(it;it!=mp.end();it++){ 
        if(it->second>mx){ 
            mx=it->second; 
            b=it->first; 
        } 
        if(mx!=it->second){ 
            ok=true; 
        } 
         
    } 
    if(ok==true){cout<<"Numbers are equal";} 
    else{cout<<b;} 
}
