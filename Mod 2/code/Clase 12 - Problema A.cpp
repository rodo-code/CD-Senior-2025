#include <iostream>
#include <map>
using namespace std;

typedef long long ll; // Abreviatura en vez de escribir long long ahora puedo solo escribir ll;

int main(){
    int N,W,a,b;
    map<ll,ll,greater<ll> >queso; // Mapa que ordena las llaves de forma decreciente
    cin>>N>>W;
    for(int i=0;i<N;i++){
        cin>>a>>b;
        queso[a]+=b;
    }
    // Recorrer el mapa
    ll res = 0;
    for(auto elem: queso){
        ll deliciosidad = elem.first;
        ll cantidad = elem.second;
        if(cantidad>=W){
            res += (W*deliciosidad);
            W -= W;
            break;
        } 
        else{ // W>cantidad
            res += (cantidad*deliciosidad);
            W -= cantidad;
        }
    }
    cout<<res<<endl;
    return 0;
}