#include <iostream>
#include <cmath>
using namespace std;


int recursiv(int* v, int n){
    if(n == 0) return 0;
    else return (v[n-1] >= 0 && int(sqrt(v[n-1])) * int(sqrt(v[n-1])) == v[n-1]) + recursiv(v, n-1);
}

int main()
{
    int v[1] = {25};
    cout << recursiv(v, 1);
    return 0;
}
