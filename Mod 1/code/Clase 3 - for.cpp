#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i<=20;i+=3){
        if(i==8) continue;
        if(i>14) break;
        cout<<i<<" ";
    }
    return 0;
}