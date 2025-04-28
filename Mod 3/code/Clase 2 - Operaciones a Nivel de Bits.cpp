#include <iostream>

using namespace std;

int main(){
    int x = 372, y = 421;
    cout<<(x & y)<<endl;
    cout<<(x | y)<<endl;
    cout<<(x ^ y)<<endl;
    cout<<(~x)<<endl;
    cout<<(x<<2)<<endl;
    cout<<(x>>4)<<endl;
    // Imprimamos todos los bits de una variable
    for(int i=31;i>=0;i--){
        if((x&(1<<i)) == 0){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
    return 0;
}