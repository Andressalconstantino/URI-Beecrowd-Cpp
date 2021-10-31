#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cout << setprecision(2) << fixed;
    
    int ct; cin >> ct;
    for (int i=0; i<ct; i++){
        int n; cin >> n;
        map<string, float>food;
        for (int j=0;j<n;j++){
            string x; float y; cin >> x >> y;
            food[x] = y;
        }
        int num; cin >> num;
        float total = 0;
        for (int h=0;h<num;h++){
            string prod; int qnt; cin >> prod >> qnt;
            total += (food[prod]*qnt);
        }
        cout << "R$ " << total << '\n';
    }

    
}
