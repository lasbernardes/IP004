#include<iostream>

using namespace std;

int main(){
    int intvouf0=0;
    int intvouf1=1;
    int intvouf2=-5;
    int intvouf3=10;

    float floatvouf0=0.0;
    float floatvouf1=1.0;
    float floatvouf2=-5.0;
    float floatvouf3=10.0;

    char charvouf0='a'-97;
    char charvouf1='a'-96;
    char charvouf2='a'-102;
    char charvouf3='a'-87;

    /*Qualquer valor 0 pode ser utilizado como false e qualquer valor diferente de 0 pode ser utilizado com true*/

    if(intvouf0){
        cout<<"Valor de intvouf0: "<<intvouf0<<endl;
    }
   if(intvouf1){
        cout<<"Valor de intvouf1: "<<intvouf1<<endl;
    }
    if(intvouf2){
        cout<<"Valor de intvouf2: "<<intvouf2<<endl;
    }
    if(intvouf3){
        cout<<"Valor de intvouf3: "<<intvouf3<<endl;
    }
//----------------float---------------
    if(floatvouf0){
        cout<<"Valor de floatvouf0: "<<floatvouf0<<endl;
    }
   if(floatvouf1){
        cout<<"Valor de floatvouf1: "<<floatvouf1<<endl;
    }
    if(floatvouf2){
        cout<<"Valor de floatvouf2: "<<floatvouf2<<endl;
    }
    if(floatvouf3){
        cout<<"Valor de floatvouf3: "<<floatvouf3<<endl;
    }
//----------------char----------------------
     if(charvouf0){
        cout<<"Valor de charvouf0: "<<charvouf0+97<<endl;
    }
    if(charvouf1){
        cout<<"Valor de charvouf1: "<<charvouf1+96<<endl;
    }
    if(charvouf2){
        cout<<"Valor de charvouf2: "<<charvouf2+102<<endl;
    }
    if(charvouf3){
        cout<<"Valor de charvouf3: "<<charvouf3+87<<endl;
    }
  
    return 0;
}