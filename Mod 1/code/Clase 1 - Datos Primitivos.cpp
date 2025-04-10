#include <iostream>
#include <iomanip> // Libreria para usar setprecision
using namespace std;

int main(){
    bool res=5000; // Cualquier valor que no sea 0 o false, sera tomado como true o 1
    cout<<res<<endl;
    int x = 3000000000;
    cout << x << endl;            // Imprime un numero negativo, porque 3 mil millones no entra en un int
    unsigned int ux = 3000000000; // unsigned nos permite quitar el signo y asi poder guardar el doble de valores que los que podemos guardar sin signo
    cout << ux << endl;           // Imprimira 3000000000
    long long l = 18000000000;
    cout << l << endl; // Imprimira 18000000000
    float pi = 3.1415952132165165165;
    cout << fixed << setprecision(10); // Imprimir con 10 decimales
    cout << pi << endl;                // No imprimira exactamente los 10 decimales, por que usamos flaot y no double
    return 0;
}  