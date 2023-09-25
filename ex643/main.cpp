#include <iostream>
#include <cmath>
using namespace std;
int recursiv(int n){
    if(floor(sqrt(n)) * floor(sqrt(n)) == n)
        return n;
    else return recursiv(n-1);
}
int main()
{
    cout << recursiv(0);
    return 0;
}
