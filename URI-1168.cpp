#include<bits/stdc++.h>
using namespace std;

int main (){
    string led;
    int total, quant;
    cin >> quant;
    for (int x = 0; x< quant; x++){
        total = 0;
        cin >> led;
        for (int i=0; i<led.size(); i++){
            if (led[i] == '1')
                {total += 2;}
            else if (led[i] == '2')
                {total += 5;}
            else if (led[i] == '3')
                {total += 5;}
            else if (led[i] == '4')
                {total += 4;}
            else if (led[i] == '5')
                {total += 5;}
            else if (led[i] == '6')
                {total += 6;}
            else if (led[i] == '7')
                {total += 3;}
            else if (led[i] == '8')
                {total += 7;}
            else if (led[i] == '9')
                {total += 6;}
            else if (led[i] == '0')
                {total += 6;}
        }
    cout << total << " leds\n";
    }
}