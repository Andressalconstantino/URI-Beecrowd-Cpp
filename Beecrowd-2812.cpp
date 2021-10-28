#include <bits/stdc++.h>
using namespace std;
int main(){
    int qtd; cin >> qtd;
    for (int i=0; i<qtd; i++){
        int n; cin >> n;
        vector<int>numbers;
        for (int j=0; j<n;j++){
            int x; cin >> x;
            if (x%2!=0){
                numbers.push_back(x);
            }
        }
        sort(numbers.begin(), numbers.end());
        int cont = 0;
        while (numbers.size()>0){
            if (numbers.size()==1){
                if (cont%2==0){
                    cout << numbers.back();
                    numbers.pop_back();
                    cont += 1;
                }
                else {
                    auto num = numbers.begin();
                    cout << *num;
                    numbers.erase(numbers.begin());
                    cont += 1;
                }
            }
            else{
                if (cont%2==0){
                    cout << numbers.back() << " ";
                    numbers.pop_back();
                    cont += 1;
                }
                else {
                    auto num = numbers.begin();
                    cout << *num << " ";
                    numbers.erase(numbers.begin());
                    cont += 1;
                }
            }

        }
        printf("\n");
    }
}
    
