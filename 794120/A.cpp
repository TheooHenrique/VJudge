#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){

    int n;
    set<int> numeros;

    for (int i = 0; i < 5; ++i){
        cin >> n;
        numeros.insert(n);
    }

    cout << numeros.size();


    return 0;
}