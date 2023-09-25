#include <iostream>
#include <cmath>
using namespace std;
void recursiv(int a, int b){
    if(a > b) return;
    if(floor(sqrt(a)) * floor(sqrt(a)) == a)
        cout << a << endl;
    recursiv(a+1, b);
}
int main()
{
    recursiv(1,25);
    return 0;
}
