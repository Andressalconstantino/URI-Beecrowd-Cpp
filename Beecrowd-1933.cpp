#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int carta1, carta2;
    cin >> carta1 >> carta2;

    if (carta1==carta2){
        cout << carta1 << '\n';
    }

    else{
        cout << max(carta1, carta2) << '\n';
    }

}
    

