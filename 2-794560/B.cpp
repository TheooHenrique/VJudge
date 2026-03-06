#include <iostream>
#include <set>
using namespace std;

int main(){

    int n, nums;
    set<int> numeros;

    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> nums;
        numeros.insert(nums);
    }
    
    cout << numeros.size();
    return 0;
}