#include <iostream>

using namespace std;
void divizori(int n, int k = 1){
    if(n%k == 0) cout << k << endl;
    if(k <= n) {
        divizori(n, k+1);
    } else return;
}
int main()
{
    divizori(22);
    return 0;
}
