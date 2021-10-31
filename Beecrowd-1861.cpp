#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    
    map<string, int>murders;
    map<string, int>killed;
    set<string>killers;

    string k, m; while(cin >> k >> m){
        murders[k] += 1;
        killers.insert(k);
        killed[m] = 0;
        if (murders.find(m) != murders.end()){
            killers.erase(m);
        }
        if (killed.find(k)!=killed.end()){
            killers.erase(k);
        }

    }
    cout << "HALL OF MURDERERS" << '\n';
    while (killers.size()>0){
        string x = *killers.begin();
        killers.erase(killers.begin());
        cout << x << " " << murders[x] << '\n';
    }

    
}
