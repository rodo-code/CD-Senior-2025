#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cantfilas, cantcol;
    cin>>cantfilas>>cantcol;
    int m[cantfilas][cantcol];
    // Pedir la matriz
    for(int i=0;i<cantfilas;i++){
        for(int j=0;j<cantcol;j++){
            cin>>m[i][j];
        }
    }
    // Imprimr
    for(int i=0;i<cantfilas;i++){
        for(int j=0;j<cantcol;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}