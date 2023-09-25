#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char s[50];
    cin.get(s,50);
    char s2[255];
    for(int i = 0; i < strlen(s); i += 2){
        for(int j = 0; j < stoi(s[i]); j++)
            strcat(s2, s[i+1]);
    }
    cout << s2;
    return 0;
}
