#include <iostream>

using namespace std;

void recursiv(int n, int nr = 1){
    if(nr > n/2) return;
    cout << nr << "+" << n-nr << endl;
    recursiv(n, nr+1);
}

int main()
{
    recursiv(11);
    return 0;
}
