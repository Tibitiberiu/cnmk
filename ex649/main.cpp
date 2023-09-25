#include <iostream>
using namespace std;

void divide_et_impera(int* v, int st, int dr, int n){
    if(dr-st==2){ // elemente vecine
        int aux = v[st];
        v[st] = v[dr];
        v[dr] = aux;
    } else if (st < dr){
        int m = (st+dr)/2;
        divide_et_impera(v, st, m, n);
        divide_et_impera(v, m+1, dr, n);
    }
}


int main(){
    int v[5] = {1,2,3,4,5};
    divide_et_impera(v, 0, 4, 4);
    for(int i=0; i<5;i++){
        cout << v[i] << " ";
    }
    return 0;
}
