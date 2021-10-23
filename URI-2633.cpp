#include <bits/stdc++.h>
using namespace std;

typedef struct Churras {
    string carne;
    int validade;
} info;

bool compare(info a, info b){
    if (a.validade < b.validade){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    while (cin >> n){  
        info s_array[n];
        for (int i=0; i<n; i++){
            cin >> s_array[i].carne >> s_array[i].validade;

        }

        sort(s_array, s_array+n, compare);
        for (int i=0; i<n; i++){
            cout << s_array[i].carne;
            if (i!= n-1){
                cout << " ";
            }
        }
        cout << "\n";
    }
}