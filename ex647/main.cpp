#include <iostream>

using namespace std;
//            pt numere mari am pus long long
void recursiv(long long x, int c = 0, int k = 0){
    if(x == 0) {
        cout << c << " apare de " << k << " ori." << endl;
        return;
    }
    if(x%10 > c)
        recursiv(x/10, x%10, 1);
    else if(x%10 == c)
        recursiv(x/10, c, k+1);
    else recursiv(x/10, c, k);

}
int main()
{
    recursiv(12345211512);
    return 0;
}
