#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    vector<int> vec;

    cin >> n;
    vec.push_back(n);
    while (n != 1){
        if (n%2 == 0){
            n = n/2;
        } else {
            n = 3*n + 1;
        }
        vec.push_back(n);
    }
    
    for (int i : vec){
        cout << i << " ";
    }

    return 0;
}