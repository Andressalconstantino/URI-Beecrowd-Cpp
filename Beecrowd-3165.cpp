#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int x){
	if (x > 1){
            if (x > 3){
                for (int i=2;i<x; i++){
                    if (x % i == 0){
                        return false;}}}
            return true;
    }
        return false;
}

int main(){
    ios_base::sync_with_stdio(false);

    int n, y; cin >> n;
    int need = 2;
    int x = 0;
    int z = n-1;
    int cont = 0;
    if (eh_primo(n)){
        need -= 1;
        x = n;
    }

    while(need!=0){
        if(eh_primo(z)){
            cont = 0;
            need -= 1;
            if(x==0){
                x = z;
            }
            else{
                y =z;
                break;
            }
            
        }
        cont += 1;
        if (cont >2){
            cont =0;
            x = 0;
            need = 2;
        }
        z -=1;
    }

    cout << y << " " << x << '\n';



    

}


    

