#include<bits/stdc++.h>
using namespace std;
int main (){
    int A1, A2, A3;
    cin >> A1;
    cin >> A2;
    cin >> A3;
    int X= (A2 * 2) + (A3 * 4);
    int Y= (A1 * 2) + (A3 * 2);
    int Z= (A1 * 4) + (A2 * 2);

    if ((X <= Y) && (X <=Z)){
        cout << X << endl;
    }
    else if ((Y <= X) && (Y <= Z)){
        cout << Y<< endl;
    }
    else if ((Z <= X) && (Z <= Y)){
        cout << Z<< endl;
    }

    return 0;
}