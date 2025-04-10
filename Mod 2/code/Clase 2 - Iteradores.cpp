#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>v = {5, 3, 9, 10, 12};
    vector<int>u = {1, 2, 3, 4, 5};
    // INSERT
    // 1. Inserta un elemento antes de la posicion 3
    // insert (pos, valor)
    v.insert(v.begin()+3,100);
    // 2. Inserta 5 veces -2 antes de la posicion 2
    // insert(pos, cant repeticiones, valor)
    v.insert(v.begin()+2,5,-2);
    // 3. Inserta los 3 primeros elementos de u antes de la posicion 1
    // insert(pos, pos_inicio, pos_final)
    v.insert(v.begin()+1,u.begin(),u.begin()+3);
    // 4. Inserta los elementos {-1, -3, -5} antes de la posicion 0
    // insert(pos, {a,b,c,d,e...} )
    v.insert(v.begin(),{-1,-3,-5});

    // ERASE
    // 1. Borra el elemento en pos
    // erase(pos)
    v.erase(v.begin()+3);
    // 2. Borra los elementos desde pos_ini hasta antes de pos_fin
    // erase(pos_ini,pos_fin)
    v.erase(v.end()-3,v.end());

    v.push_back(1000);

    // RESIZE
    // 1. Solo cambiar el tamaño
    // resize(tam)
    v.resize(10);
    // 2. Cambia el tamaño y si es necesario crear mas elementos los coloca con x
    // resize(tam,x)
    v.resize(15,-100);
    // Imprimir un vector en c++11
    for(auto x: v){ // Para los x que estan en v
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}