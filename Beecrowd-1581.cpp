#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    
    int ct; cin >> ct;
    for(int i=0;i<ct;i++){
        set<string>lang;
        int n; cin >> n;
        for (int j=0;j<n;j++){
            string x; cin >> x;
            lang.insert(x);
        }
        if (lang.size()>1){
            cout << "ingles" << '\n';
        }
        else{
            cout << *lang.begin() << '\n';
        }
    }

    
}
