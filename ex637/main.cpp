#include <iostream>

using namespace std;

int recursiv(int x, int subapel = 0){ // subapel ca sa afiseze pt x = 0 ca are 1 cifra
    if(x == 0){
        if(!subapel) return 1;
        else return 0;
    }
    return ((x%10)%2==0) + recursiv(x/10, 1);
}
int main()
{
    cout << recursiv(2456);
    return 0;
}
