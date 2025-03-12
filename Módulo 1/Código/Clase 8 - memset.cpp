#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[10][10];
    // Llenarlo de -1s // Solo usar con 0 o -1
    memset(a,-1,sizeof(a)); // sizeof(a) me permite saber el tamaño en bytes de mi estructura
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}