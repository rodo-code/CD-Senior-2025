#include <iostream>
#include <vector>
using namespace std;

vector<int> v = {1,3,7,11,20,23,32,35,40,45,70};

int busqueda_binaria(int l,int r, int x){
    if((r-l)<=1){
        // Ya estamos en un rango corto
        if(x==v[r]) return r;
        if(x==v[l]) return l;
        return -1; // Significa que no esta
    }
    int m =(l+r)/2;
    if(x==v[m]) return m;
    if(x<v[m]) 
        return busqueda_binaria(l,m,x);
    else 
        return busqueda_binaria(m,r,x);
}

int main(){
    cout<<busqueda_binaria(0,10,20)<<endl; // Debe imprimir 4
    cout<<busqueda_binaria(0,10,42)<<endl; // Debe imprimir -1
    return 0;
}