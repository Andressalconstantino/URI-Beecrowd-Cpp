#include <bits/stdc++.h>
using namespace std;

typedef struct Van {
    string nome;
    char sigla;
    int dist;
} info;

bool compare(info a, info b){
    if (a.dist < b.dist){
        return 1;
    }
    else if (a.dist == b.dist){
        if (a.sigla < b.sigla){
            return 1;
        }
        else if (a.sigla == b.sigla){
            if (a.nome < b.nome){
                return 1;
            }
            else{
                return 0;
            }
            
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    while (cin >> n){  
        info s_array[n];
        for (int i=0; i<n; i++){
            cin >> s_array[i].nome >> s_array[i].sigla >> s_array[i].dist;

        }

        sort(s_array, s_array+n, compare);
        for (int i=0; i<n; i++){
            cout << s_array[i].nome << "\n";
        }

    }
}