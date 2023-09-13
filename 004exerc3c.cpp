#include <iostream>
#include<climits>

using namespace std;

int main(){
    long int li;
    unsigned long int uli=ULONG_MAX;

    cout<<"LONG_MIN:  "<<LONG_MIN<<endl;
    cout<<"LONG_MAX:   "<<LONG_MAX<<endl;

    cout<<"ULONG_MAX: "<<ULONG_MAX<<endl;

    li=uli;
    cout<<"li : "<<li<<endl;
    /*
    Os modificadores de tipos signed e unsigned reservam a mesma quantidade de bits na memória.
    Os tipos signed guardam o bit mais significativo (esquerda) para definição do sinal.
    O atribuição de máximo valor preenche todos os bit com a representação 1.
    O tipo unsigned não tem sinal, logo o digito mais signficativo não guarda sinal e, assim
    é utilizado para valor, "dobrando" o valor máximo suportado.
    Todo cálculo intermediário é feito em binário. 
    Portanto, o -1 impresso na tela é a resultante do cálculo do algoritmo de complemento à base 2
    com posterior conversão para decimal.

    O tipo long int divide o intervalo de 18446744073709551615 
    pela "metade" entre valores positivos e negativos, sendo o valor 
    positivo máximo 9223372036854775807, assim o unsigned long int extrapola
    o máximo de long int. Como indicativo desta extrapolação é retornado -1.
    Sendo o primeiro bit, do espaço da variável na memória, representante do 
    do sinal e 1 representa sinal negativo.
    */
    uli=li;
    cout<<"uli: "<<uli<<endl<<endl;
    /*
    O máximo valor é exibido em decimal (convertido da base binária) por que ele nunca foi perdido 
    ou corrompido na base binária. O conteúdo da memória nunca alterado.
    */


    return 0;
}