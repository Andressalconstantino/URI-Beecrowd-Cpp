#include<bits/stdc++.h>
using namespace std;

int main (){
    int quant, z;
    string user_1, user_2, combinado;
    cin >> quant;
    for (int x=0; x<quant; x++){
        combinado = "";
        cin >> user_1 >> user_2;
        int y = user_1.size();
        int w = user_2.size();
        int z = y+w;
        for (int i=0; i<z; i++){
            if (y>0 && w>0){
                combinado += user_1[i];
                combinado += user_2[i]; 
            }
            else if (y<=0 && w >0){
                combinado += user_2[i];
            }
            else if (w<=0 && y >0){
                combinado += user_1[i];
            }      
            else if (w<=0 && y<=0){
                break;
            }
            y -= 1;
            w -= 1;
        }
        cout << combinado << "\n";
    }
}