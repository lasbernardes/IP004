#include <iostream>
#include<climits>
#include<limits>

using namespace std;

int main(){
    float fl;

    cout<<"flt max: "<<__FLT_MAX__<<endl;
    cout<<"flt min: "<<__FLT_MIN__<<endl;

    cout<<"sizeof float: "<<__SIZEOF_FLOAT__<<endl;
 
    cout << "min: " << numeric_limits<float>::min() << endl;
    cout << "max: " << numeric_limits<float>::max() << endl;
    cout << endl;    
  
    cout<<"sizeof float: "<<sizeof(float)<<endl<<endl;

    return 0;
}