#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int>dias;
    dias["enero"]=31;
    dias["febrero"]=28;
    dias["marzo"]=31;
    dias["abril"]=30;
    dias["mayo"]=31;
    dias["junio"]=30;
    dias.insert(make_pair("julio",31));
    dias.insert(make_pair("agosto",31));
    dias.insert(make_pair("septiembre",30));
    dias.insert(pair<string,int>("octubre",31));
    dias.insert(pair<string,int>("noviembre",30));
    dias.insert(pair<string,int>("diciembre",31));
    // Borrado
    dias.erase("febrero");
    // Intetamos cambiar una llave
    if(dias.find("febrero")!=dias.end()){
        cout<<"febrero esta en el calendario"<<endl;
    }
    else{
        cout<<"febrero no esta en el calendario"<<endl;
    }
    // Recorrido
    for(auto elem: dias){
        cout<<elem.first<<" tiene "<<elem.second<<" dias"<<endl;
    }
    return 0;
}