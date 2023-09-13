#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float pif=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa
    double pid=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa

    cout<<"pif pi  (2 digitos): "<<fixed<<setprecision(2) <<pif<<endl;
    cout<<"pif pi  (4 digitos): "<<fixed<<setprecision(4) <<pif<<endl;
    cout<<"pif pi  (8 digitos): "<<fixed<<setprecision(8) <<pif<<endl;
    cout<<"pif pi (16 digitos): "<<fixed<<setprecision(16)<<pif<<endl;

    //cout<<"pi (50 digitos): "<<fixed<<setprecision(50)<<pid<<endl;
    cout<<"pid pi  (2 digitos): "<<fixed<<setprecision(2) <<pid<<endl;
    cout<<"pid pi  (4 digitos): "<<fixed<<setprecision(4) <<pid<<endl;
    cout<<"pid pi  (8 digitos): "<<fixed<<setprecision(8) <<pid<<endl;
    cout<<"pid pi (16 digitos): "<<fixed<<setprecision(16)<<pid<<endl;
    
    cout<<"sizeof  float: "<<sizeof(float)<<endl;
    cout<<"sizeof double: "<<sizeof(double)<<endl<<endl;
    
    return 0;
}