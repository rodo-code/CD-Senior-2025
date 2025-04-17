#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    int N,x;
    int mas=-1,maxi=-1;
    unordered_map<int,int> cant;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x;
        cant[x]++;
        // Ver cual es el mayor
        if(cant[x]>maxi){
            mas=x;
            maxi=cant[x];
        }
        else if(cant[x]==maxi){
            if(x<mas){
                mas=x;
            }
        }
    }
    cout<<mas<<endl;
    return 0;
}