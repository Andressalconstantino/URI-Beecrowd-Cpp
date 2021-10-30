#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    map<int, string>feedback;
    feedback[1] = "Rolien";
    feedback[2] = "Naej";
    feedback[3] = "Elehcim";
    feedback[4] = "Odranoel";

    int ct; cin >> ct;
    for (int i=0; i<ct;i++){
        int nf; cin >> nf;
        for (int j=0;j<nf;j++){
            int x; cin >> x;
            cout << feedback[x] << '\n';
        }
    }

    
}
