#include <bits/stdc++.h>
using namespace std;

int search( vector<int> &representante, int x ) 
{
    if (representante[x] == x)
        return x;

    return representante[x] = search(representante, representante[x]);
}

void join( vector<int> &representante, int x, int y ) 
{
    x = search(representante, x); 
    y = search(representante, y); 

    representante[y] = x;
}


int main(){

	//criando
    map<string, int>family;
    vector<int>fams;
    set<int>qtd_families;

    //recebendo o input
    int a, b;
    int cont = 0;
    cin >> a >> b;
    
    //criando o vetor fams;
    for (int g=0; g<a; g++){
        fams.push_back(g);
    }

    //loop x y z b times
    for (int i=0; i<b; i++){
	    string x, y, z;
        cin >> x >> z >> y;
        if (!(family.find(x) != family.end())){
            family[x] = cont;
            cont += 1;
        }
        if (!(family.find(y) != family.end())){
            family[y] = cont;
            cont += 1;
        }
        
        join(fams, fams[family[x]], fams[family[y]]);
    }
    
    //verificando quantas familias tem

    for(int k=0; k<fams.size(); k++){
        int p = search(fams, k);
        qtd_families.insert(p);
    }

    cout << qtd_families.size() << '\n';

}