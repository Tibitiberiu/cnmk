#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int n, int k = 2){
    if(n <= 2){
        if(n == 2) return 1;
        else return 0;
    }
    if(n % k == 0) return 0;
    if(k * k > n) return 1;

    return isPrime(n, k+1);

}
int main()
{
    cout << isPrime(6);
}
