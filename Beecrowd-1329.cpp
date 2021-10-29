#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    
    while(1){
        int n; cin >> n; if(n==0){break;}
        int maria = 0;
        int joao = 0;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            if (x==0){
                maria += 1;
            }
            else{
                joao +=1;
            }
        }
        cout << "Mary won " << maria <<" times and John won "<< joao << " times" << '\n';

    }
    

}


    

