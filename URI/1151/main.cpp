#include <iostream>

using namespace std;

unsigned fibo(int n){
    unsigned F = 0;   // atual
    unsigned ant = 0; // anterior

    for (int i = 0; i < n; i++)
    {

        if (i == 1)
        {
            F = 1;
            ant = 0;
        }
        else
        {
            F += ant;
            ant = F - ant;
        }

        if( i < n - 1)
            cout << F << " ";
        else
            cout << F;
    }

    return F;
}

int main() {
    
    int n;

    cin >> n;
    fibo(n);
    cout << endl;

    return 0;
}