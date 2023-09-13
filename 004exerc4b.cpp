#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float pif=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa

    cout<<"pi (50 digitos): "<<fixed<<setprecision(50)<<pif<<endl;
    cout<<"sizeof float: "<<sizeof(float)<<endl<<endl;
    
    return 0;
}