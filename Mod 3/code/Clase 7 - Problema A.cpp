#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        vector<int>S;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            S.push_back(x);
        }
        // Sacar el MCD de todo S
        int d = S[0];
        for(int i=1;i<S.size();i++){
           d = __gcd(d,S[i]); 
        }
        cout<<S.back()/d<<endl;

    } 
}