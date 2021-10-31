#include<bits/stdc++.h>
using namespace std;

int main (){
    int N, P, Q, X;
    char C;
    cin >> N;
    cin >> P >> C >> Q;
    if (C=='+'){
        X = P + Q;
        if (X<=N){
            cout << "OK" << '\n';
        }
        else {
            cout << "OVERFLOW" << '\n';
        }
    }
    else if (C=='*'){
        X = P*Q;
        if (X<=N){
            cout << "OK" << '\n';
        }
        else {
            cout << "OVERFLOW" << '\n';
        }
    }
}
