#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long double pild=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa
    double pid=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa

    cout<<"pild pi  (2 digitos): "<<fixed<<setprecision(2) <<pild<<endl;
    cout<<"pild pi  (4 digitos): "<<fixed<<setprecision(4) <<pild<<endl;
    cout<<"pild pi  (8 digitos): "<<fixed<<setprecision(8) <<pild<<endl;
    cout<<"pild pi (16 digitos): "<<fixed<<setprecision(16)<<pild<<endl;

    //cout<<"pi (50 digitos): "<<fixed<<setprecision(50)<<pid<<endl;
    cout<<"pid pi   (2 digitos): "<<fixed<<setprecision(2) <<pid<<endl;
    cout<<"pid pi   (4 digitos): "<<fixed<<setprecision(4) <<pid<<endl;
    cout<<"pid pi   (8 digitos): "<<fixed<<setprecision(8) <<pid<<endl;
    cout<<"pid pi  (16 digitos): "<<fixed<<setprecision(16)<<pid<<endl;
    
    cout<<"sizeof long double: "<<sizeof(long double)<<endl;
    cout<<"sizeof      double: "<<sizeof(double)<<endl<<endl;
    
    return 0;
}
/*
pild pi  (4 digitos): 3.1416
pild pi  (8 digitos): 3.14159265
pild pi (16 digitos): 3.1415926535897931
pid pi   (2 digitos): 3.14
pid pi   (4 digitos): 3.1416
pid pi   (8 digitos): 3.14159265
pid pi  (16 digitos): 3.1415926535897931
sizeof long double: 16
sizeof      double: 8
*/