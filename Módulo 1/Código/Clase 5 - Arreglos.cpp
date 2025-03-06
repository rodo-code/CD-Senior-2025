#include <iostream>
#include <algorithm>
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
    // Ordenamos
    sort(a, a + tam);                 // Ordena de menor a mayor (ascedente)
    sort(a, a + tam, greater<int>()); // Ordena de mayor a menor (descendente)
    // Complejidad del sort es O(n log n)
    // Imprimir el arreglo

    for(int i=0;i<tam;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}