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
    vector<int> bancos;
    for (int i=0; i<=N; i++){
        bancos.push_back(i);
    }
    for (int j=0; j<B; j++){
        char z;
        int x, y;
        cin >> z >> x >> y;
        if (z=='C'){
          int  r_x = find(bancos,x );
          int r_y = find(bancos, y);
          if (r_x == r_y){
              cout << "S" << '\n';
          }
          else{
              cout << "N" << '\n';
          }
        }
        else if (z=='F'){
           join(bancos,x,y );
        }
    }

}