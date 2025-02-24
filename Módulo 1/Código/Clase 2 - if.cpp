// PLANTILLA
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numero;
    cin>>numero;
    if(numero>0)
        cout<<"POSITIVO"<<endl;
    else if(numero<0)
        cout<<"NEGATIVO"<<endl;
    else
        cout<<"CERO"<<endl;

    string respuesta = (numero>0)? "POSITIVO" : ((numero<0)? "NEGATIVO": "CERO"); // Es posible usar un operador ternario dentro de otro operador ternario
    cout<<respuesta<<endl;
    int edad;
    cin>>edad;
    cout << ((edad>=18)? "Mayor de Edad" : "Menor de Edad") <<endl;
    return 0;
}