#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Obtener los digitos de un número.
    int n;
    cin>>n;
    while(n>0){
        cout<<n%10<<endl;
        n = n / 10;
    }
    return 0;
}