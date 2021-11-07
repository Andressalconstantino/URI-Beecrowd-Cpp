#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    
    string sentence; while(getline(cin, sentence)){
        int ul = 0;
        for (int i=0; i<sentence.size();i++){
            if (sentence[i]!=' '){
                int newv = (int)sentence[i];
                if (ul%2==0 && newv>90){
                    newv -= 32;
                }
                else if (ul%2!=0 && newv<=90){
                    newv += 32;
                }
                sentence[i] = (char)newv;
                ul += 1;
            }
        }
        cout << sentence << '\n';
    }

    
}
