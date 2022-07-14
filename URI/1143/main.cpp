#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    int iter = 1;

    cin >> n;

    while(n > 0) {
        cout << iter << " " << pow(iter, 2) << " " << pow(iter, 3) << endl;

        n--;
        iter++;
    }


    return 0;
}