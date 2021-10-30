#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    
    while(1){
        int n; cin >> n; if(n==0){break;}
        int certos = 0;
        int time = 0;
        map<char, string>corr;
        map<char,int>pont;

        for (int i=0; i<n;i++){
            char letra; int num; string yn; cin >> letra >> num >> yn;
            corr[letra] = yn;
            if (yn[0]=='c'){
                pont[letra] += num;
            }
            else{
                pont[letra] += 20;
            }

        }

        for (map<char,string>::iterator it=corr.begin(); it!=corr.end(); ++it){
            if( it->second=="correct"){
                certos += 1;
                time += pont[it->first];
            }
        }
        cout << certos << " " << time << '\n';
    }
}

