#include <iostream>

using namespace std;

int main() {
    
    int m, n, i, ac;

    cin >> m >> n;

    if(m > n) {
        swap(m, n);
    }

    ac = 0;
    i = m;
    if(i % 2 == 0) {
        i = i + 1;
    } else {
        i = i + 2;
    } 

    while(i < n) {
        ac = ac + i;
        i = i + 2;
    }   

    cout << ac << endl;


    return 0;
}