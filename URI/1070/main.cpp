#include <iostream>

using namespace std;

int main() {

    uint n, i;

    cin >> n;

    i = 6;

    if(n % 2 == 0) {
        n = n + 1;
    } else {
        n = n;
    }

    while(i > 0) {
        cout << n << endl;

        n += 2;
        i--;
    }



    return 0;
}