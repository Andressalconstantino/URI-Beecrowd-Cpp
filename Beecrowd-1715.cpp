#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

    int n, m; cin >> n >> m;
    int players = 0;
    for(int i=0; i<n; i++){
        bool won_all = true;
        for(int j=0;j<m;j++){
            int x; cin >> x;
            if (x==0){
                won_all = false;
            }
        }
        if (won_all){
            players += 1;
        }
    }

    cout << players << '\n';
    

}
