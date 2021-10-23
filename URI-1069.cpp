#include <bits/stdc++.h>
using namespace std;

int main(){  
    int n;
    cin >> n;
    vector<char>diamonds;
    for (int i=0; i<n; i++){
        string x;
        if (i==0){
        cin.get();}
        getline(cin, x);
        int cont = 0;
        for (int j=0; j<x.size(); j++){
            if (x[j]=='<'){
                diamonds.push_back(x[j]);
            }
            else if (x[j]=='>' && !diamonds.empty()){
                diamonds.pop_back();
                cont += 1;
            }
        }
        cout << cont << '\n';
        diamonds.clear();
    }
}