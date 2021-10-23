#include <bits/stdc++.h>
using namespace std;

int search( vector<int> &representante, int x ) 
{
    if (representante[x] == x)
        return x;

    return representante[x] = search(representante, representante[x]);
}

void join( vector<int> &representante, int x, int y ) 
{
    x = search(representante, x); 
    y = search(representante, y); 

    representante[y] = x;
}


int main(){ 

    int A, B, K;
    cin >> A >> B >> K;
    map <string, int> players;
    vector<int> values;
    vector <int> player;

    for (int i=0; i<A; i++){
        string x;
        int y;
        cin >> x >> y;
        players[x] = i;
        player.push_back(i);
        values.push_back(y);
    }

    for (int j=0; j<B; j++){
        string z, w;
        cin >> z >> w;
        join(player, players[z], players[w]);
    }

    for (int h=0; h<K; h++){
        string v;
        cin >> v;
        bool answerr = true;
        int tar = search(player, players[v]);
        if (values[players[v]]<5){
            for (int g=0; g<A; g++){
                int temp = search(player, g);
                if (tar == temp){
                    if(values[g]>5){
                        answerr = false;
                    }
                }
            }
        }

        if (answerr==true){
            cout << "S" << '\n';
        }

        else{
            cout << "N" << '\n';
        }


    }


}