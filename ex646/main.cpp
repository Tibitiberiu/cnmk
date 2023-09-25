#include <iostream>
#include <cmath>
using namespace std;
int recursiv(int a, int b){
    if(a > b) return 0;
    if(floor(sqrt(a)) * floor(sqrt(a)) == a)
        return 1 + recursiv(a+1, b);
    else return 0 + recursiv(a+1,b);
}
int main()
{
    cout << recursiv(1,1);
    return 0;
}
