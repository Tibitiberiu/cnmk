#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    if(a*b == 0) return a+b;
    if(a > b) return cmmdc(a-b, b);
    else if (a < b) return cmmdc(a, b-a);
    else return a;
}

int main()
{
    cout << cmmdc(0,0);
    return 0;
}
