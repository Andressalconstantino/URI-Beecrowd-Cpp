#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

   priority_queue<pair<int, int>>ord_players;
   map<int, int> players;

    int np, n; cin >> np >> n;
    int nr = n*np;
    int cont = 0;
    for (int i=0; i<nr;i++){
        int x; cin >> x;
        players[cont] += x;
        cont += 1;
        if (cont==np){
            cont = 0;
        }
    }

    for (int j=0;j<np;j++){
        ord_players.push(make_pair(players[j], j));
    }
    pair<int, int> winner = ord_players.top();
    cout << winner.second+1 << '\n';
    

}


    

