#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myfunction (int i,int j) { return (i>j); }

int main() {
    
    int n, i;
    vector<int> pares;
    vector<int> impares;

    cin >> n;

    while(n > 0) {
        cin >> i;
        if(i % 2 == 0) {
            pares.push_back(i);
        } else {
            impares.push_back(i);
        }

        n--;
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), myfunction);
//    reverse(impares.begin(), impares.end());

    for (auto &v : pares) {
        cout << v << endl;
    }

    for(auto &v: impares) {
       cout << v << endl;
    }    
    

    return 0;
}