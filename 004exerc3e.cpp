#include <iostream>
#include<climits>

using namespace std;

int main(){
    long int li=LONG_MAX;
    unsigned int ui;

    cout<<"UINT64_MAX:  "<<UINT64_MAX<<endl;
    cout<<"UINT32_MAX:  "<<UINT32_MAX<<endl;
    cout<<"UINT16_MAX:  "<<UINT16_MAX<<endl<<endl;

    cout<<"sizeof  long int: "<<sizeof(long int)<<endl;
    cout<<"sizeof       int: "<<sizeof(int)<<endl;
    cout<<"sizeof short int: "<<sizeof(short int)<<endl<<endl;


    //cout<<"LONG_MAX:   "<<LONG_MAX<<endl;

    cout<<"LONG_MIN:  "<<LONG_MIN<<endl;
    cout<<"LONG_MAX:   "<<LONG_MAX<<endl<<endl;

    ui=li;
    cout<<"ui: "<<ui<<endl;
    /*
    
    O tipo long int divide o intervalo de 18446744073709551615 
    pela "metade" entre valores positivos e negativos, sendo o valor 
    positivo máximo 9223372036854775807, assim o unsigned long int extrapola
    o máximo de long int. Como indicativo desta extrapolação é retornado -1.
    Sendo o primeiro bit, do espaço da variável na memória, representante do 
    do sinal e 1 representa sinal negativo.
    */
   /*
   Para representação do máximo valor de um tipo de varíavel todos os bits são "marcados" com 1
   O tipo long int (64 bits) tem o dobro do tamanho do tipo int (32 bits), se os bit são "marcados" da direita par esquerda
   quando se atinge a posição 32 não há mais que ser marcado, e todas as posições do tipo int foram "marcados", quando a 
   atribuição inversa acontece, somente 32 bits dos 64 (long int) serão preenchidos, assim quando convertidos para base
   numerida decimal tanto long int quanto int apresentam o mesmo resultado.

   */
    li=ui;
    cout<<"li: "<<li<<endl<<endl;


    return 0;
}