#include <bits/stdc++.h>
using namespace std;

int find( vector<int> &representante, int x ) 
{
    if (representante[x] == x)
        return x;

    return representante[x] = find(representante, representante[x]);
}

void join( vector<int> &representante, int x, int y ) 
{
    x = find(representante, x); 
    y = find(representante, y); 

    representante[y] = x;
}


int main(){  
    int N, B;
    cin >> N >> B;
    set<int>fam;
    vector<int> people;
    for (int i=0; i<=N; i++){
        people.push_back(i);
    }
    for (int j=0; j<B; j++){
        int x, y;
        cin >> x >> y;
        join(people, x, y);
    }
    for (int a=1; a<=N; a++){
        int t = find(people, people[a]);
        fam.insert(t);
    }
     
    cout << fam.size() << '\n';

}