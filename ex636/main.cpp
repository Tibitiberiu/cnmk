#include <iostream>

using namespace std;

int recursiv(int x, int subapel = 0){ // subapel ca sa afiseze pt x = 0 ca are 1 cifra
    if(x==0){
        if(!subapel) return 1;
        else return 0;
    }
    else return 1 + recursiv(x/10,1);
}
int main()
{
    cout << recursiv(1234);
    return 0;
}
