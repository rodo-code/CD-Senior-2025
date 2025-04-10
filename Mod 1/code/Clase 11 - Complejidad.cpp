#include <iostream>

using namespace std;

bool primalidad_lenta(long long N){
    int cd=0;
    for(long long i=1;i<=N;i++){
        if(N%i==0){
            cd++;
        }
    }
    if(cd==2){
        return true;
    }
    return false;
}

bool primalidad_rapida(long long N){
    int cd=0;
    for(long long i=1;i*i<=N;i++){
        if(N%i==0){
            cd++;
            if(i!=(N/i)){
                cd++;
            }
        }
    }
    if(cd==2){
        return true;
    }
    return false;
}

int main(){
    long long N;
    cin>>N;
    cout<<primalidad_rapida(N)<<endl;
    return 0;
}