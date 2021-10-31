#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    
    map<string, string>natal;
    natal["brasil"] =  "Feliz Natal!";
    natal["alemanha"] = "Frohliche Weihnachten!";
    natal["austria"] =  "Frohe Weihnacht!";
    natal["coreia"] =   "Chuk Sung Tan!";
    natal["espanha"] =  "Feliz Navidad!";
    natal["grecia"] =   "Kala Christougena!";
    natal["estados-unidos"] =  "Merry Christmas!";
    natal["inglaterra"] = "Merry Christmas!";
    natal["australia"] ="Merry Christmas!";
    natal["portugal"] = "Feliz Natal!";
    natal["suecia"] =   "God Jul!";
    natal["turquia"] =  "Mutlu Noeller";
    natal["argentina"] ="Feliz Navidad!";
    natal["chile"] =    "Feliz Navidad!";
    natal["mexico"] =   "Feliz Navidad!";
    natal["antardida"] = "Merry Christmas!";
    natal["canada"] =   "Merry Christmas!";
    natal["irlanda"] =  "Nollaig Shona Dhuit!";
    natal["belgica"] =  "Zalig Kerstfeest!";
    natal["italia"] =   "Buon Natale!";
    natal["libia"] =    "Buon Natale!";
    natal["siria"] =   "Milad Mubarak!";
    natal["marrocos"] ="Milad Mubarak!";
    natal["japao"]   ="Merii Kurisumasu!";

    string x;
    while(cin>>x){
        if (natal.find(x)!= natal.end()){
            cout << natal[x] << '\n';
        }
        else{
            cout << "--- NOT FOUND ---" << '\n';
        }
    }

    
}
