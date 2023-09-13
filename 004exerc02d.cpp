#include <iostream>
#include <cstdlib>
#include <iostream>
#include <wctype.h>  
#include <locale.h>  
#include <wchar.h> 


using namespace std;

int main(){
    //setlocale(LC_ALL, "pt-br.UTF-8");
    setlocale(LC_ALL, "");
    
    char i;
    //wchar_t aux[1];

    cout<<"Digite um caracter qualquer: ";
    cin>>i;
    //mbstowcs(aux, i, 1); 
    cout<<">>"<<i<<endl;
    cout<<"char\tdec\toct\thex"<<endl;
        cout<<"'"<<char(i)<<"'";
        cout<<"\t"<<showbase<<dec<<static_cast<int>(i);
        cout<<"\t"<<showbase<<oct<<static_cast<int>(i);
        cout<<"\t"<<showbase<<hex<<static_cast<int>(i)<<endl;


    return 0;
}
//https://pt.quora.com/Em-Linguagem-C-como-trabalhar-com-caracteres-UTF-8-em-array-de-caracteres