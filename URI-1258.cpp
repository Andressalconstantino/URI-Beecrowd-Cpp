#include <bits/stdc++.h>
using namespace std;

typedef struct camisetas {
    string nome;
    string cor;
    char tam;
} info;

bool compare(info a, info b){
    if (a.cor < b.cor){
        return 1;
    }
    else if (a.cor == b.cor){
        
        if (a.tam > b.tam){
            return 1;
        }
        else if (a.tam == b.tam){
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
    int cont;
    cont = 0; 
    while (1>0){ 
        int n; 
        cin >> n;
        if (n==0){
            break;
        }
        info s_array[n];
        cin.get();
        for (int i=0; i<n; i++){
            getline(cin, s_array[i].nome);
            cin >> s_array[i].cor >> s_array[i].tam;
            cin.get();
        }
        if (cont>0){
            cout << "\n";
        }
        sort(s_array, s_array+n, compare);
        for (int i=0; i<n; i++){
                cout << s_array[i].cor << " "<< s_array[i].tam << " " << s_array[i].nome << "\n";
            }
        cont +=1;
    }
}