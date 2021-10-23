#include<bits/stdc++.h>
using namespace std;
int main (){
    int vetor[1000];
    int sizin;
    cin >> sizin;
    int start = 0;
    for (int i = 0; i<1000; i++){
        if (start >= sizin){
            start = 0;
        }
        vetor[i] = start;
        start += 1;
        printf("N[%d] = %d\n", i, vetor[i]);
        
    }
        
    return 0;
}