#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s="arbol";
    // Recorremos el string
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    // Imprimimos los caracteres Ascii
    for(int i=0;i<256;i++){
        char caracter = char(i); // Un entero se vuelve caracter
        int ascii = int(caracter); // Un caracter se vuelve entero
        cout<<"El elemento "<<ascii<<" de la tabla ASCII es "<<char(i)<<endl;
    }
    return 0;
}