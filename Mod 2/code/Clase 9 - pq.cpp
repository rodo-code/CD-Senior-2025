#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int>pq;
    // priority_queue<int,vector<int>, greater<int> >pq; // De menor a mayor
    pq.push(7); // Son en O(log N)
    pq.push(2);
    pq.push(10);

    // Recorrer - Descolar
    while(!pq.empty()){
        cout<<pq.top()<<endl; // Para acceder al primer elemento usamos top
        pq.pop(); // Eliminamos el primer elemento
    }
    return 0;
}