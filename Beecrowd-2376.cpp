#include <bits/stdc++.h>
using namespace std;


int main(){  
    vector<char>equipe;
    int contador = 0;
    for (int i=0; i<16; i++){
       char x = char('A'+ contador);
        equipe.push_back(x);
       contador += 1;
    } 
     while (equipe.size() > 1){
         for (int j=0; j<15; j++){
             if (j+1> equipe.size()){
                 break;
             }
        int x, y;
        cin >> x >> y;
        if (x>y){
            equipe.erase(std::remove(equipe.begin(), equipe.end(), equipe[j+1]), equipe.end());
        }
        else if (y>x){
            equipe.erase(std::remove(equipe.begin(), equipe.end(), equipe[j]), equipe.end());
        }
        }
     }
     cout << equipe[0] << '\n';

}
