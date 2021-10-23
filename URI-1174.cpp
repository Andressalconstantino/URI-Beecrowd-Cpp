#include<bits/stdc++.h>
using namespace std;
int main (){
    float vetor[100];
    for (int i = 0; i<100; i++){
        cin >> vetor[i];
        if (vetor[i]<=10){
        printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }
        
    return 0;
}