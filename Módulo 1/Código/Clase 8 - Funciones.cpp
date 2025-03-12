#include <bits/stdc++.h>

using namespace std;

int f(int x,int y){
    for(int i=x+1;i<=y;i++){
        x = x + i;
    }
    return x;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x=5, y=10;
    cout<<f(x,y)<<endl; /// QUE IMPRIME ESTA LINEA en el chat
    cout<<x<<endl; /// QUE IMPRIME ESTA LINEA en el chat
    return 0;
}

