#include <iostream>
#include <cstdlib>


using namespace std;

int main(){
    
    char i;
    //wchar_t aux[1];

    cout<<"Digite um caracter qualquer: ";
    cin>>i;
    //mbstowcs(aux, i, 1); 
    cout<<"i: "<<i<<endl;
    cout<<"char";
    cout<<"\tdec";
    cout<<"\toct";
    cout<<"\thex";
    cout<<endl;
        cout<<"'"<<char(i)<<"'";
        cout<<"\t"<<showbase<<dec<<static_cast<int>(i);
        cout<<"\t"<<showbase<<oct<<static_cast<int>(i);
        cout<<"\t"<<showbase<<hex<<static_cast<int>(i);
        cout<<endl;


    return 0;
}
//https://pt.quora.com/Em-Linguagem-C-como-trabalhar-com-caracteres-UTF-8-em-array-de-caracteres