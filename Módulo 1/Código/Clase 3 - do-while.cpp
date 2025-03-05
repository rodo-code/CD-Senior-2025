#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string contrasenia;
    do{
        cout<<"Ingrese su contrasenia"<<endl;
        cin>>contrasenia;
    }while(contrasenia!="CD2025");
    cout<<"Ingreso Correctamente"<<endl;
    return 0;
}