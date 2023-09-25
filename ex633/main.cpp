#include <iostream>

using namespace std;

int rasturnat(int x){
    int aux = 0;
    while(x != 0){
        aux = aux * 10 + x%10;
        x /= 10;
    }
    return aux;
}

int convert(int x, int b){
    int nr = 0;
    while(x != 0){
        nr = nr * 10 + x % b;
        x /= b;
    }
    return rasturnat(nr);
}
// recursiv
int convertire(int x, int b){
    if(x==0) return 0;
    return x%b + 10 * convertire(x/b, b);
}

// 23
int main()
{
    cout << convertire(99,2);
    return 0;
}
