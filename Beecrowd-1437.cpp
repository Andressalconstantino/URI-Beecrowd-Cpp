#include <bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    
    while (1){
        int n; cin>> n;

        if (n==0){
            break;
        }

        char direcoes[4] = {'N', 'L', 'S', 'O'};
        int start=0;
        string x; cin >> x;
        for (int i=0;i<n;i++){
            if (x[i]=='D'){
                start += 1;
            }
            if (x[i]=='E'){
                start -= 1;
            }

            if (start==4){
                start = 0;
            }
            if (start<0){
                start = 3;
            }

        }
        
        cout << direcoes[start] << '\n';
    }
    

}
