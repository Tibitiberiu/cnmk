#include <iostream>
#include <cstring>
using namespace std;

void recursiv(char* s, int pas = 0){
    char vocale[] = "aeiou";
    if(pas >= strlen(s)) return;
    if(strchr(vocale, s[pas]))
       cout << s[pas] << " ";
    cout << s[pas] << " ";
    recursiv(s, pas+1);
}

int main()
{
    char s[255] = "oana";
    recursiv(s);
    return 0;
}
