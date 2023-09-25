#include <iostream>
#include <cstring>
using namespace std;

void recursiv(char* s, int pas = 0){
    if(pas == strlen(s)) return;
    char cifre[] = "0123456789";
    if(strchr(cifre, s[pas]) != NULL) cout << s[pas];
    recursiv(s, pas+1);
}

int main()
{
    char s[] = "avion23ABB567";
    recursiv(s);
    return 0;
}
