#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    
    int n; cin >> n;
    int buyc = 0;
    int buye = 0;
    int c = 0;
    int e = 0;
    for (int i=0;i<n;i++){
        string a, b; cin >> a >> b;
        if (a=="chuva"){
            if (c==0){
                buyc += 1;
                e += 1;
            }
            else{
                c -= 1;
                e += 1;
            }
        }
        if (b=="chuva"){
            if (e==0){
                buye += 1;
                c += 1;
            }
            else{
                e -=1;
                c += 1;
            }
            
        }
    }
    cout << buyc << " " << buye << '\n';

}
    
