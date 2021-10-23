#include<bits/stdc++.h>
using namespace std;
int joguinhodapaula(int x, string s, int z) {
    if (x==z){
        return x*z;
    }
    else{
        if (isupper(s[1])){
            return z-x;
        }
        else if (islower(s[1])){
            return x+z;
        }
    }
}
int main (){
    int loopin;
    cin >> loopin;
    for (int i = 0; i<loopin; i++){
        string entrada;
        cin >> entrada;
        char x = entrada[0];
        int a = x - '0';
        char z = entrada[2];
        int c = z - '0';
        cout << joguinhodapaula(a, entrada, c) << endl;
    }
    return 0;
}