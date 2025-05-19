#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> v = {2,8,3,1,12,7,6,4,5,9};
    // Es necesario ordenar la estructura antes de aplicar busqueda binaria
    sort(v.begin(),v.end());

    if(binary_search(v.begin(),v.end(),8)){
        cout<<"8 si esta en el vector"<<endl;
    }
    else{
        cout<<"8 no esta en el vector"<<endl;
    }
    // lower_bound
    // NO ESTA
    // auto hace que C++ deduzca el tipo de dato
    auto it = lower_bound(v.begin(),v.end(),100); // Deberia apuntar al 12
    cout<<(*it)<<endl; // Con * se accede al contenido del iterador
    // SI ESTA
    it = lower_bound(v.begin(),v.end(),7); // Deberia apuntar al 7
    cout<<(*it)<<endl; // Con * se accede al contenido del iterador

    // upper_bound
    // NO ESTA y es mayor a los demas
    auto ot = upper_bound(v.begin(),v.end(),100);
    cout<<(*ot)<<endl; // ot deberia apuntar al end
    // ESTA
    ot = upper_bound(v.begin(),v.end(),7);
    cout<<(*ot)<<endl; // ot deberia apuntar al 8
}