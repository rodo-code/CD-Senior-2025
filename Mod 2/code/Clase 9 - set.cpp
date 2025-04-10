#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>conj; // Creamos un set
    conj.insert(5); // Insercion
    conj.insert(2);
    conj.insert(9);
    conj.insert(3);
    if(conj.find(7)!=conj.end()){ // find nos sirve para buscar
        cout<<"Esta el 7"<<endl;
    }
    else{
        cout<<"No esta el 7"<<endl;
    }
    conj.erase(7);
    conj.erase(5);
    // Recorrer con c++ 11
    for(int x: conj){
        cout<<x<<" ";
    }
    return 0;
}