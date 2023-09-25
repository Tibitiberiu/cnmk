#include <iostream>

using namespace std;

int recursiv(int x, int c){
    if(x == 0) return 0;
    if(x%10 == c) return 1 + recursiv(x/10, c);
    else if(x%10 != c) return recursiv(x/10, c);
}

int main()
{
    cout << recursiv(1234123,9);
    return 0;
}
