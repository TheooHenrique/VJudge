#include<iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> vec;
    int n;
    for (int i = 0; i < 4; ++i){
        cin >> n;
        vec.push_back(n);
    }

    
    int a = vec[0];
    int b = vec[1];
    int c = vec[2];
    int d = vec[3];

    cout << (a + b) * (c - d) << endl;
    cout << "Takahashi";

    return 0;
}