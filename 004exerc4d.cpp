#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double pid=3.14159265358979323846264338327950288419716939937510;//50 digitos de mantissa

    cout<<"pi             : "<<pid<<endl;
    cout<<"pi (50 digitos): "<<fixed<<setprecision(50)<<pid<<endl;
    cout<<"sizeof float: "<<sizeof(float)<<endl<<endl;
    
    return 0;
}
/*
pi             : 3.14159
pi (50 digitos): 3.14159265358979311599796346854418516159057617187500
sizeof float: 4
*/