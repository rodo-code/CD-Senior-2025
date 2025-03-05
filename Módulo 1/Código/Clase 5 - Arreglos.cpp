#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tam;
    cin>>tam;
    // Creamos el arreglo
    int a[tam];
    // Pedir el arreglo
    for(int i=0;i<tam;i++){
        cin>>a[i]; // Pedimos cada elemento del arreglo
    }
    // Imprimir el arreglo
    for(int i=0;i<tam;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}