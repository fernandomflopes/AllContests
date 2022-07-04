#include <iostream>

using namespace std;

#define print(i, n, r) cout << i << " x " << n << " = " << r << endl 

int main() {
    

    int n;

    cin >> n;

    for(int i = 1; i <= 10; i++) {
        print(i, n, (i * n));
    }

    return 0;
}