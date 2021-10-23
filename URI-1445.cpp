#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, contador = 0;
    cin >> x >> y;
    for (int i=1; i<=y; i++){
        cout << i;
        contador += 1;
        if (contador==x){
            cout << endl;
            contador = 0;
        }
        else if(i==y){
            break;
        }
        else{
            cout << " ";}
        
    }

}