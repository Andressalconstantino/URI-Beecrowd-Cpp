#include <bits/stdc++.h>
using namespace std;

int find( vector<int> &representante, int x ) 
{
    if (representante[x] == x)
        return x;

    return representante[x] = find(representante, representante[x]);
}

void join( vector<int> &representante, int x, int y ) 
{
    x = find(representante, x); 
    y = find(representante, y); 

    representante[y] = x;
}


int main(){  
    int N, B;
    cin >> N >> B;
    bool V = true;
    vector<int> leds;
    for (int i=0; i<=N; i++){
        leds.push_back(i);
    }
    for (int j=0; j<B; j++){
        int x, y;
        cin >> x >> y;
        join(leds, x, y);
    }
    for (int a=1; a<=N; a++){
        if(find(leds, leds[a]) != find(leds, leds[1])){
            V = false;
        }
        else{
            continue;
        }
        
    }

    if (V){
        cout << "COMPLETO" <<'\n';
    }
    else{
        cout << "INCOMPLETO" << '\n';
    }

}