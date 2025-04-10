#include <iostream>
#include <vector> // Para usar vector

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Creamos un vector
    vector<int>v; // Crea un vector vacio
    vector<int>v2(10); // Crea 10 casillas vacias   
    vector<int>v3(15,-2); // Crea 15 casillas con el elemento -2 en cda una
    vector<int>v4(v2); // Creara una copia exacta de v2
    vector<int>v5 = {5, 3, 2, 1}; // Crea un vector con ese contenido
    cout<<"El primer elemento de v4 es "<<v4.front()<<endl;
    cout<<"El ultimo elemento de v3 es "<<v3.back()<<endl;
    for(int i=0;i<v5.size();i++){
        cout<<v5[i]<<" ";
    }
    cout<<endl;
    return 0;
}