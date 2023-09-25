#include <iostream>

using namespace std;

int recursiv(int x, int c = 0){
    if(x == 0) return c;
    else return recursiv(x/10, x%10 > c ?  x%10 : c); // conditie ? true : false <=> if(conditie){ true; } else {false}
}

int main()
{
    cout << recursiv(74621823);
    return 0;
}
