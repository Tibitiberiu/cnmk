#include <iostream>

using namespace std;
int v[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int m = 3;
int n = 3;
int recursiv(int coloana, int pas = 0){
    if(pas >= m) return 0;
    else return v[pas][coloana-1] + recursiv(coloana, pas+1);
}
int main()
{
    cout << recursiv(3);
    return 0;
}
