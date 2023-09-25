#include <iostream>

using namespace std;


int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int k = 1;
    while(fibonacci(k) <= 1000){
        cout << fibonacci(k) << " ";
        k++;
    }
    cout << "\b";
    return 0;
}
