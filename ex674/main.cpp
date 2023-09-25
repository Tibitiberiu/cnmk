#include <iostream>
#include <cstring>

using namespace std;

int nr_vocale(char* s, int pas = 0){
    char vocale[] = "aeiou";
    if(pas == strlen(s)) return 0;
    else return (strchr(vocale, s[pas]) != NULL) + nr_vocale(s, pas+1);
}

int main()
{
    char s[] = "avion";
    cout << nr_vocale(s);
    return 0;
}
