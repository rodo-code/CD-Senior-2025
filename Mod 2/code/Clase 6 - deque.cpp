#include <iostream>
#include <queue> // Para usar deque ponemos la libreria queue

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Colocar 1 millon de elementos al inicio de un vector
    int N=1000000;
    deque<int>v;
    for(int i=0;i<N;i++){
        v.push_front(i); // Los deque tienen una inserción adelante en O(1)
    }
    cout<<v.size()<<endl;
    return 0;
}