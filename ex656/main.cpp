#include <iostream>

using namespace std;
void citeste(int* v, int n){
    if(n == 0) return;
    else citeste(v, n-1);
    cin >> v[n-1];
}
int main()
{
    int v[10];
    int n = 3;
    citeste(v,n);
    for(int i = 0; i < 3; i++){
        cout << v[i] << " ";
    }
    return 0;
}
