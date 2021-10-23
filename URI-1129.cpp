#include<bits/stdc++.h>
using namespace std;

int main (){
    while (1>0){
        int A, B, C, D, E;
        int a;
        cin >> a;
        if (a==0){
        break;
        }
        for (int i=0; i<a; i++){

            cin >> A >> B >> C >> D >> E;

            //A

            if (A<=127 && B>127 && C>127 && D>127 && E>127){
                cout << "A\n";
            }

            //B
            else if (A>127 && B<=127 && C>127 && D>127 && E>127){
                cout << "B\n";
            }

            //C
            else if (A>127 && B>127 && C<=127 && D>127 && E>127){
                cout << "C\n";
            }

            //D
            else if (A>127 && B>127 && C>127 && D<=127 && E>127){
                cout << "D\n";
            }

            //E
            else if (A>127 && B>127 && C>127 && D>127 && E<=127){
                cout << "E\n";
            }

            //Error
            else{
                cout << "*\n";
            }
        
        }
    }
    return 0;

}