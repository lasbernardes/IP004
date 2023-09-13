#include <iostream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    cout<<"char\tdec\toct\thex"<<endl;
    for(int i=48;i<58;i++){
        cout<<"'"<<static_cast<char>(i)<<"'";
        cout<<"\t"<<showbase<<dec<<i;
        cout<<"\t"<<showbase<<oct<<i;
        //cout << showbase ;// show the 0x prefix
        // << internal // fill between the prefix and the number
        // << setfill('0'); // fill with 0s
        
        cout<<"\t"<<showbase<<hex<<i<<endl;

    }

    return 0;
}