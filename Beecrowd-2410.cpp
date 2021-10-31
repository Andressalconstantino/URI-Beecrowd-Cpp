#include <bits/stdc++.h>
using namespace std;

int main(){  
    set < int> alunos;
    int n, x;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> x;
        alunos.insert(x);
    }
    int y;
    y = alunos.size();
    cout << y << "\n";
}
