#include <iostream>

using namespace std;


int recursiv(int* v, int n, int pas = 0){
    if(pas == 0){
        if(n == 1) return 1;
        else return (v[0] == v[1]) + recursiv(v, n, pas + 1);
    }
    else if(pas == n-1) return (v[pas] == v[pas-1]);
    else return (v[pas] == v[pas-1] + v[pas+1]) + recursiv(v, n, pas + 1);
}

int main()
{
    int v[6] = {2,7,5,-2,3,5};
    cout << recursiv(v, 6);
    return 0;
}
