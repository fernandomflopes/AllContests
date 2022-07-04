#include <iostream>

using namespace std;

#define PRINT(n1, n2, n3) cout << n1 << endl << n2 << endl << n3 << endl

inline void swap(int *n1, int *n2) {
    if(*n1 > *n2) {
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}

int main() {

    int a,b,c;
    int n1, n2, n3;

    cin >> a >> b >> c;

    n1 = a;
    n2 = b;
    n3 = c;

    swap(&a, &b);
    swap(&a, &c);
    swap(&b, &c);

    PRINT(a, b, c);
    cout << endl;
    PRINT(n1, n2, n3);

    return 0;
}