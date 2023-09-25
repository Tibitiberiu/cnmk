#include <iostream>
#include <cstring>
using namespace std;
bool palindrom(char* s){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != s[strlen(s)-1-i]){
            return false;
        }
    }
    return true;
}
int main()
{
    //varianta 1
    /*
    char s[255], s2[255];
    cin.get(s,255);
    strcpy(s2, s);
    strrev(s2);
    if(strcmp(s,s2) == 0) cout << "Palindrom";
    else cout << "Nu este palindrom";
    return 0;*/
    char s[255];
    cin.get(s,255);
    palindrom(s) ? cout << "palindrom" : cout << "nu e palindrom";
}
