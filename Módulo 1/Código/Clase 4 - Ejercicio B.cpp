#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A,B,C;
    // Pedir datos
    cin>>A>>B>>C;
    for(int i=A;i<=B;i++){
        // Vemos si alguno de los i es multiplo C
        if(i%C==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}