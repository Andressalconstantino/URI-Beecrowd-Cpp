#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

    
    int mapsize, n; cin >> mapsize >> n;
    map <string, int> cargos;
    for (int i=0; i<mapsize;i++){
        string func; int salary; cin >> func >> salary;
        cargos[func] = salary;
    }
    for (int j=0;j<n;j++){
        int result = 0;
        string x;
        while(cin>>x){
            if (x=="."){
                break;
            }
            if (cargos.find(x)!= cargos.end()){
                result += cargos[x];
            }
        }
        cout << result << '\n';
    }

    
}
