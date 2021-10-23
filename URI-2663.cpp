#include<bits/stdc++.h>
using namespace std;
int main (){
    
    int n_participantes, n_min;
    cin >> n_participantes;
    cin >> n_min;
    priority_queue <int> pontuacao;

    int last=0;
    int qnt=0;

    for (int i=0; i<n_participantes; i++){
        int x;
        cin >> x;
        pontuacao.push(x);
    }

    while (n_min>0){
        last = pontuacao.top();
        pontuacao.pop();
        n_min -= 1;
        qnt += 1;
    }

    while (1>0){
        if (pontuacao.size()==0){
            break;
        }
        else if (pontuacao.top()==last){
            pontuacao.pop();
            qnt += 1;
        }
        else{
            break;
        }
    }

    cout << qnt << '\n';

}