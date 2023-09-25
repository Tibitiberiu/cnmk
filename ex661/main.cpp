#include <iostream>

using namespace std;

int recursiv(int* v, int n, int x){
    if(n == 0) return 0;
    if(v[n-1] == x) return 1;
    else return recursiv(v, n-1, x);
}

int main()
{
    int v[5] = {1,2,3,4,5};
    cout << (recursiv(v, 5, 3) ? "DA" : "NU");
    return 0;
}
