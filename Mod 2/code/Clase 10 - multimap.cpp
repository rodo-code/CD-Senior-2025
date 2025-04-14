#include <iostream>
#include <map> // Se usa la libreria map para usar multimap
using namespace std;

int main(){
    multimap<string,int> mm; // multi map me permite tener llaves duplicadas
    mm.emplace("febrero",28); // emplace para introducir directamente a un mapa o multimap
    mm.emplace("febrero",29);
    mm.emplace("enero",31);
    mm.emplace("septiembre",30);
    mm.erase("febrero"); // Borra todos los elementos con llave febrero
    for(auto elem: mm){
        cout<<elem.first<<" tiene "<<elem.second<<" dias"<<endl;
    }
    return 0;
}