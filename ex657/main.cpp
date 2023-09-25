#include <iostream>

using namespace std;


void recursiv(int* v, int n){
    if(n==0) return;
    recursiv(v, n-1);
    cout << v[n-1] << " ";
}

int main()
{
    int v[5] = {1,2,3,4,5};
    recursiv(v,5);
    return 0;
}
