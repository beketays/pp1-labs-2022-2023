#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> letters;
    for(int i=0; i<s.size(); i++){
        letters.insert(tolower(s[i]));   // сразу киргиземиз сетке, сет сразу удаляет дубликатов, и сразу сортирует
    }

    cout << letters.size() << endl;

    set<char> :: iterator itrtr = letters.begin();


    for(itrtr; itrtr != letters.end(); itrtr++){
        cout << *itrtr << " ";
    }
    
}