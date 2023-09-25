#include <iostream>

using namespace std;

void recursiv(int a, int r, int n){
    if(n==0) return;
    recursiv(a,r,n-1);
    cout << a + (n-1) * r << " ";
}

int main()
{
    recursiv(10,2,5);
    return 0;
}
