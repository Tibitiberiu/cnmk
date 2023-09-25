#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char vocale[] = "aeiou";
    char s[255];
    cin.get(s,255);
    for(int i = 0; i < strlen(s); i++){
        if(strchr(vocale, s[i])) cout << s[i] << " ";
    }
    return 0;
}
