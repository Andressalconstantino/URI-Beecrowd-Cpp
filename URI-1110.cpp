#include <bits/stdc++.h>
using namespace std;


int main(){  
    while (1>0){
    int n;
    cin >> n;
    if (n==0){
        break;
    }
    vector<int>cartas;
    vector<int>discarded;
    for (int i=1; i<=n; i++){
        cartas.push_back(i);
    }
    int x = 0;
    while (cartas.size()>1){
        for (x; x<cartas.size(); x++){
            if (cartas.size()==1){
                break;
            }
            discarded.push_back(cartas[x]);
            cartas.erase(std::remove(cartas.begin(), cartas.end(), cartas[x]), cartas.end());
            if (x+1==cartas.size()){
                x = 0;
                break;
            }
            if (x+1>cartas.size()){
                x = 1;
                break;
            }
        }
    }
    for (int a=0; a<discarded.size(); a++){
        if (a==0){
            cout << "Discarded cards: ";
        }
        if (a!=discarded.size() - 1){
            cout << discarded[a] << ", ";
        }
        else if (a==discarded.size() -1){
            cout << discarded[a] << '\n';
        }
    }
    cout << "Remaining card: " << cartas[0] << '\n';
}
}