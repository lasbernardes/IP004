#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float pif=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa

    cout<<"pi  (2 digitos): "<<fixed<<setprecision(2)<<pif<<endl;
    cout<<"pi  (4 digitos): "<<fixed<<setprecision(4)<<pif<<endl;
    cout<<"pi  (8 digitos): "<<fixed<<setprecision(8)<<pif<<endl;
    cout<<"pi (16 digitos): "<<fixed<<setprecision(16)<<pif<<endl;
    cout<<"sizeof float: "<<sizeof(float)<<endl<<endl;
    
    return 0;
}