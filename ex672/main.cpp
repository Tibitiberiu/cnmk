#include <iostream>
#include <cstring>
using namespace std;

void recursiv(char* s, int pas = 0){
    if(pas >= strlen(s)) return;
    recursiv(s, pas+1);
    cout << s[pas] << " ";
}

int main()
{
    char s[255] = "Ana are 15 mere si 13 pere";
    recursiv(s);
    return 0;
}
