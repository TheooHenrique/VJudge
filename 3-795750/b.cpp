#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, m;
    cin >> n;

    vector<int> vec;
    for (int i = 0; i < n*7; ++i){
        cin >> m;
        vec.push_back(m);
    }
  
    vector<int> respostas(n, 0);
    for (int i = 0; i < n; ++i){
        for(int j = 0; j < 7; ++j){
            respostas[i] += vec[j];
        }

        vec.erase(vec.begin(), vec.begin() + 7);

    }

    for (int i = 0; i < respostas.size()-1; ++i){
        cout << respostas[i] << " "; 
    }
    
    cout << respostas[respostas.size()-1];

    return 0;
}