#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int N = 10000000;
    unordered_set<int> s;
    for (int i = 0; i < N; i++){
        if(s.find(i)==s.end()){ // Si no esta el elemento, añadelo
            s.insert(i);
        }    
    }
    cout << s.size() << endl;
    return 0;
}