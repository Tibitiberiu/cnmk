#include <iostream>
#include <cmath>
using namespace std;

int recursiv(int n){
    if(n <= 0) return 0;
    if(n == 1) return 1;
    else return pow(-1, n+1) * (n*n) + recursiv(n-1);
}

int main()
{
    cout << recursiv(12);
    return 0;
}
