#include <iostream>

using namespace std;

int suma(int* v, int n){
    if(n == 0) return 0; // nu afecteaza suma;
    return ((v[n-1]%2==0) ? v[n-1] : 0) + suma(v, n-1);
}

int main()
{
    int v[5] = {1,2,3,4,5};
    cout << suma(v,5);
    return 0;
}
