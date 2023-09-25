#include <iostream>

using namespace std;

int recursiv(int n){
    if(n==0) return 0;
    else return n + recursiv(n-1);
}

int main()
{
    cout << recursiv(10);
    return 0;
}
