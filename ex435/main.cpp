#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /// VARIANTA 1
    /*
    char s[255];
    cin.get(s,255);
    bool ok = true;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' ' && !isalpha(s[i])){
            ok = false;
            break;
        }
    }
    if(ok) cout << "Contine numai caractere care sunt litere";
    else cout << "Contine si caractere care nu sunt litere";
    return 0;*/
    /// VARIANTA 2
    char s[255];
    cin.get(s,255);
    char litere[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    bool ok = true;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' ' && !strchr(litere, s[i])){
            ok = false;
            break;
        }
    }
    if(ok) cout << "Contine numai caractere care sunt litere";
    else cout << "Contine si caractere care nu sunt litere";
}
