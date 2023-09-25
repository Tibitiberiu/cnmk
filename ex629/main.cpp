#include <iostream>

using namespace std;

void repeta(int& a, int b, int& c, int nr_repetari = 0){
    if(a > b){
        a -= b;
        repeta(a, b, c, nr_repetari + 1);
    }
    else c = nr_repetari;
}

int main()
{
    int a = 1512;
    int b = 41;
    int c;
    repeta(a,b,c);
    cout << a << endl << c;
    return 0;
}
