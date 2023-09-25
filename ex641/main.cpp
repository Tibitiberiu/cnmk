#include <iostream>

using namespace std;

void afisare_termeni(int x, int divizor){
    if(divizor < 2) return; // merge si fara, dar da crash la divizor = 1
    if(x == 1) {
        if(divizor == 2) cout << 1;
        else return ;
    }
    int k = 0;
    while(x % divizor == 0){
        x /= divizor;
        k++;
    }
    if(k != 0)
        cout << divizor << " " << k << endl;
    afisare_termeni(x, divizor + 1);
}
int main()
{
    afisare_termeni(360, 2); // default divizor = 2
}
