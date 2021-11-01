#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin >> n;
    for (int i=0; i<n; i++){
        string x; cin >> x;
        int cont = 0;
        for (int j=0; j<x.size(); j++){
            if (x[j]=='a' || x[j]=='e' || x[j]=='i' || x[j]=='o' || x[j]=='u' || x[j]=='A' || x[j]=='E' || x[j]=='I' || x[j]=='O' || x[j]=='U'){
                cont = 0;
            }
            else {
                cont += 1;
            }
            if (cont>=3){
                break;
            }
        }
        if (cont>=3){
            cout << x << " nao eh facil" << '\n';
        }
        else{
            cout << x << " eh facil" << '\n';
        }
    }
    

}

