#include <bits/stdc++.h>
using namespace std;


int main(){  
    int cases;
    cin >> cases;
    // Começando cada caso:
    for (int i=1; i<=cases; i++){
        int person, jump;
        cin >> person >> jump;

    //Criando o vetor com as pessoas:
        queue<int>people;
        for (int j=1; j<=person; j++){
            people.push(j);
        }

    //Loop p/ remover até sobrar 1:
        while (people.size()>1){
            for (int a=0; a<jump-1; a++){
                people.push(people.front());
                people.pop();
                }
                people.pop();
        }
        cout << "Case " << i << ": " << people.front() << "\n";
    }
}