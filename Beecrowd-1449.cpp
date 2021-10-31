#include <bits/stdc++.h>
using namespace std;

int main(){  
    map <string, string> Jaspion;
    int n_i, n_w, n_s;
    cin >> n_i;
    vector<string>musiquinha;

    for (int i=0; i<n_i; i++){
        cin >> n_w >> n_s;
        for (int j=0; j<n_w; j++){
            string x, y, z;
            if (j==0){
                getline(cin, z);
            }
            getline(cin, x);
            getline(cin, y);
            Jaspion[x] = y;
        }
    

        for (int b=0; b<n_s; b++){
            string songsinho;
            while(cin >> songsinho){
                musiquinha.push_back(songsinho);
                if (cin.get()=='\n'){
                    break;}  
                }
            for (int a=0; a<musiquinha.size(); a++){
                if(Jaspion.find(musiquinha[a]) != Jaspion.end()){
                    cout << Jaspion[musiquinha[a]];
                }
                else{
                    cout << musiquinha[a];
                }
                if (a != musiquinha.size() - 1){
                    cout << " ";
                }
            }
            musiquinha.clear();
            cout << "\n";
        }
        cout <<"\n";
        Jaspion.clear();
    }
}
