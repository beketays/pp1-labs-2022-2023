#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue <string> q;
    for(int i=0; i<n; ++i){
        int k; cin >> k;
        if(k==2){
            q.pop();
        }
        else{
            string s; cin >> s;
            q.push(s);
        }
        if(!q.empty()){
            cout << q.front() << endl;
        }
        else {
            cout << "queue is empty" << endl;
        }
    }

}
