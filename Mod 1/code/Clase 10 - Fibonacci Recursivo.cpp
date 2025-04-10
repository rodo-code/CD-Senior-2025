#include <bits/stdc++.h>

using namespace std;

long long cont;
int fibo(int n){
    cont++;
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<50;i++){
        cont=0;
        int f=fibo(i);
        cout<<"Para sacar fibo de "<<i<<" que es "<<f<<" se necesitaron "<<cont<<" llamadas"<<endl;
    }
    return 0;
}