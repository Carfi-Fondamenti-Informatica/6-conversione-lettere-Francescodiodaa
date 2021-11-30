#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char a=0;
    cin>>a;
    if (funzione(a)==false){
        cout<<"errore";
    }
    if (funzione(a)==true){
        int ascii=(int)a;
         if(ascii>=97){
             ascii=(ascii-32);
             cout<<char(ascii);
        }
        else{
            cout<<char((ascii+32));
        }

    }

    return 0;
}
