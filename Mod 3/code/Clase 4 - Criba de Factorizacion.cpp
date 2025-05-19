#include <iostream>
#include <vector>
using namespace std;

int N = 1000000;
vector<int>fact;
void criba(){
    // Inicialmente marcamos a todos con sigo mismo
    fact.assign(N+1,-1); // Note que el 0 y el 1 estan marcados con -1
    for(int i=2;i<=N;i++){
        fact[i]=i;
    }
    // Criba
    for(int i=2;i*i<=N;i++){
        if(fact[i]==i){ // Es primo
            // Marcamos a sus multiplos
            for(int j=i*i;j<=N;j+=i){ // Va hasta el final de i en i
                if(fact[j]==j){ // Es decir no fue marcado antes, pero ahora quiero marcarlo
                    fact[j]=i;
                }
            }
        }
    }
}
void factorizar(int x){
    if(fact[x]==-1) return;
    cout<<fact[x]<<" ";
    factorizar(x/fact[x]);
}
int main(){
    criba();
    int x;
    cin>>x;
    factorizar(x);
    return 0;
}