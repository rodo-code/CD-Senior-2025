#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,Q;
    string s;
    cin>>N>>Q;
    cin>>s;
    for(int i=0;i<Q;i++){
        // Leemos las Q operaciones
        int tipo, x;
        cin>>tipo>>x;
        if(tipo==1){
            for(int j=0;j<x;j++){
                char ultimo = s[N-1];
                s.pop_back();
                s = ultimo + s;
            }
        }
        if(tipo==2){
            cout<<s[x-1]<<endl;
        }
    }
    return 0;
}