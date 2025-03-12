#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    // Caso Base
    if(n==0){
        return 1;
    }
    // Paso Recursivo
    return n*factorial(n-1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<factorial(5)<<endl;
    return 0;
}