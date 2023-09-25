#include <iostream>

using namespace std;
int v[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
int m = 3;
int n = 3;
void recursiv(int i = 0, int j = 0){
    cout << v[i][j] << " ";
    if(i == m-1 && j == n-1) // colt dreatpa jos
        return;
    if(j < n-1)
        recursiv(i, j+1); // treci pe coloana urmatoare de la stanga la dreapta
    else if (i < m-1){
        cout << endl;
        recursiv(i+1, 0); // treci pe randul urmator de sus in jos
    }
}
int main()
{
    recursiv(0,0);
    return 0;
}
