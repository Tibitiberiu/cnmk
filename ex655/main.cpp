#include <iostream>
#include <cmath>

using namespace std;

void recursiv(int a, int r, int n){
    if(n==0) return;
    recursiv(a,r,n-1);
    cout << a * pow(r,n-1) << " ";
}

int main()
{
    recursiv(10,2,5);
    return 0;
}
