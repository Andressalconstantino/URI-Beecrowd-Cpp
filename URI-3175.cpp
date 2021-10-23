#include <bits/stdc++.h>
using namespace std;

int main(){  
    map <int, int> noel;
    set <int> kid;
    vector<int> kida;
    int kids;
    cin >> kids;
    int gifts = 1;
    for (int i=0; i<kids; i++){
        int x;
        cin >> x;
        kid.insert(x);
        kida.push_back(x);
    }
    for (set<int>::iterator it=kid.begin(); it!=kid.end(); ++it){
      noel[*it] =  gifts;
      gifts += 1;
    }
    int contador = 0;
    for (int j=0; j<kida.size(); j++){
        contador += noel[kida[j]];      
    }
    cout << contador << '\n';
    
}