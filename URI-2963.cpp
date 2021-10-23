#include<bits/stdc++.h>
using namespace std;
int main (){
    
    priority_queue <pair<int, string>>bobo;
    int n;
    cin >> n;
    for (int i=0; i<n;i++){
        int x;
        cin >> x;
        if (i==0){
            bobo.push(make_pair(x, "winner"));
        }
        else{
            bobo.push(make_pair(x, "someone"));
        }
    }
    pair <int, string> resultado = bobo.top();
    if (resultado.second=="winner"){
        cout << "S" << '\n';
    }
    else{
        cout << "N" << '\n';
    }


}
