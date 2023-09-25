#include <iostream>

using namespace std;
int recursiv(int n){
    int k = n;
    while(k%2==0){
        k/=2;
    }
    if(k == 1) return n;
    else return recursiv(n-1);
}
int main()
{
    cout << recursiv(32);
    return 0;
}
