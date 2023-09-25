#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[255];
    cin.get(s,255);
    char primul = s[0];
    bool ok = false;
    for(int i=0; i < strlen(s); i++){
        if(s[i] != primul){
            ok = true;
            break;
        }
    }
    if(ok == true) cout << "Contine caractere distincte";
    else cout << "Nu contine caractere distincte";
    return 0;
}
