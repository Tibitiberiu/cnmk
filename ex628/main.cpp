#include <iostream>

using namespace std;

int repeta(int a, int b, int& c, int putere = 1){
    if(a == 0 && b == 0) {
        c = -1;
        return -1;
    }; // eroare
    if(b) repeta(a, b-1, c, putere * a);
    else c = putere; // cand ajungi la ultima iteratie
}

int main()
{
    int a = 0;
    int b = 0;
    int c;
    repeta(a,b,c);
    cout << c;
    return 0;
}
