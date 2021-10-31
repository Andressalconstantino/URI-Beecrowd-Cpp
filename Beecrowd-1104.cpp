#include <bits/stdc++.h>
using namespace std;

int main(){  
    while(1){
    set < int> cartas_Alice;
    set < int> cartas_Bea;
    set <int> junto;

    int a, b, x;
    cin >> a >> b;
    if (a==0 && b==0){
        break;
    }
    for (int i=0; i<a; i++){
        cin >> x;
        cartas_Alice.insert(x);
        junto.insert(x);
    }
    for (int i=0; i<b; i++){
        cin >> x;
        cartas_Bea.insert(x);
        junto.insert(x);
    }
    int A, B;
    A = junto.size() - cartas_Alice.size();
    B = junto.size() - cartas_Bea.size();
    if (A<B){
    cout << A << "\n";
    }
    else{
        cout << B << "\n";
    }
}
}
