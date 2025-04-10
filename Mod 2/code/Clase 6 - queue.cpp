#include <iostream>
#include <queue> // Para usar queue ponemos la libreria queue

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Constructor
    queue<int>q; // Cola vacia
    q.push(1);
    q.push(9);
    q.push(9);
    q.push(9); // push agrega un elemento a la cola 
    // Decolar o sacar todos los elementos de una cola
    while(!q.empty()){ // empty nos permite saber si la cola esta o no vacia
        cout<<q.front()<<endl; // Nos indica que elemento esta en el frente de la cola
        q.pop(); // Elimina el elemento al frente de la cola
    }
    return 0;
}