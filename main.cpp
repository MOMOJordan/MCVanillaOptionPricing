#include <iostream>
#include "SimpleMonteCarlo.h"



using namespace std;

int main() {

    PayOffCall payoffcall=PayOffCall(100.0);
    VanillaOption vanilla1=VanillaOption(1,payoffcall);
    DoubleDigital payoffdigit=DoubleDigital(80,110);
    VanillaOption vanilla2=VanillaOption(1,payoffdigit);

    cout<<SimpleMonteCarlo2(1,80,0.5,0.03,10000,payoffcall)<<endl;
    cout<<SimpleMonteCarlo3(80,0.5,0.03,10000,vanilla1)<<endl;
    cout<<SimpleMonteCarlo2(1,80,0.5,0.03,10000,payoffdigit)<<endl;
    cout<<SimpleMonteCarlo3(80,0.5,0.03,10000,vanilla2)<<endl;
    return 0;

}
