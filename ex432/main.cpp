#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50];
    cin.get(s,255);
    int suma = 0;
    for(int i = 0; i < strlen(s); i++)
        suma += (int)s[i];
    cout << suma;
    return 0;
}
