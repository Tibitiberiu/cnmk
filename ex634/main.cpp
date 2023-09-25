#include <iostream>

using namespace std;

void recursiv(int x, int& cm, int c = 0){ // ca sa nu fie nevoie sa initializam cm inainte
    if(x == 0) cm = c;
    else return recursiv(x/10, cm, x%10 > c ?  x%10 : c);
}

int main()
{
    int x = 1231541;
    int cm;
    recursiv(x, cm);
    cout << cm;
    return 0;
}
