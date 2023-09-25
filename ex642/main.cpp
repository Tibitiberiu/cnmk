#include <iostream>

using namespace std;


void subprogram(int n){
    if(n==4) {
        cout << 4 << endl;
        return;
    }
    else if(n%10 == 4 || n%10==0)
        subprogram(n/10);
    else if(n%2==0 || n == 1) subprogram(n*2);
    cout << n << endl;
}

int main()
{
    subprogram(7024);
    return 0;
}
