#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<int> v{1,2,3,4,5,6,7,8,9};
 
    // Print old vector
    cout << "Old vector :";
    for(int i=0; i < v.size(); i++)
        cout << " " << v[i] << endl;
    // Rotate vector left 3 times.
    int rot=3;
 
    // rotate function
    rotate(v.begin(), v.begin()+rot, v.end());
 
    // Print new vector
    cout << "New vector after left rotation :";
    for (int i=0; i < v.size(); i++)
        cout << " " << v[i];
         cout << "\n";
        vector <int> v2{1,2,3,4,5,6,7,8,9};
 
    // Print old vector
    cout << "Old vector :";
    for (int i=0; i < v2.size(); i++)
        cout << " " << v2[i];
    cout << "\n";
 
    // Rotate vector right 4 times.
    int rot2 = 4;
 
    // rotate function
    rotate(v2.begin(), v2.begin()+v2.size()-rot2, v2.end());
 
    // Print new vector
    cout << "New vector after right rotation :";
    for (int i=0; i < v2.size(); i++)
        cout << " " << v2[i];
    cout << "\n";
 
}