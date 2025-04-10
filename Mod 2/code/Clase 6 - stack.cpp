#include <iostream>
#include <stack> // Para usar stack ponemos la libreria stack

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Constructor
    stack<string>s; // Cola vacia
    s.push("Manchester City");
    s.push("Barcelona");
    s.push("Bolivar");
    // Sacar todos los elementos de la pila
    while(!s.empty()){ // empty nos permite saber si la pila esta o no vacia
        cout<<s.top()<<endl; // Nos indica que elemento esta en el cima de la cola
        s.pop(); // Elimina el elemento en la cima de la pila
    }
    return 0;
}