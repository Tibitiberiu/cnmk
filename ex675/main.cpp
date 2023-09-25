#include <iostream>
#include <cstring>
using namespace std;


int recursiv(char* s, int pas = 0){
    if(pas >= strlen(s)/2) return 1;
    if(s[pas] == s[strlen(s) - 1 - pas]) recursiv(s, pas + 1);
    else return 0;
}

int main()
{
    char s[] = "rotitor";
    cout << recursiv(s);
    return 0;
}
