#include <iostream>
#include <vector>
using namespace std;

int main(){

    long long n;
    vector<long long> vec;

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
    
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i];
        if (i < vec.size() - 1) cout << " ";
    }


    return 0;
}