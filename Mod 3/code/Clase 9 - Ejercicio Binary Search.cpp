#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<long long>v;

bool se_puede(long long x, long long k){
    // x es cuanto quiero que sea la mediana
    long long opn = 0; // operaciones necesarias
    for(int i=v.size()/2;i<v.size();i++){
        opn += max(0LL,x-v[i]);
    }
    return (opn<=k);
}

int main(){
    int n;
    long long k,x;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    // Hacemos busqueda binaria
    long long lo = v[v.size()/2]; // La mediana actual
    long long hi = v.back()+k; // El elemento mas grande que puedo alcanzar
    while(hi-lo>1){
        long long m = (hi+lo)/2;
        if(se_puede(m,k)){
            lo = m;
        }
        else{
            hi = m;
        }
    }
    if(se_puede(hi,k)) cout<<hi<<endl;
    else if(se_puede(lo,k)) cout<<lo<<endl;
    else cout<<lo-1<<endl;
    return 0;   
}