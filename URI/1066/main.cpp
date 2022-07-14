#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    
    int c = 5;
    int n, count;
    vector<int> numbers;

    while(c > 0) {
        cin >> n;
        numbers.push_back(n);
        c--;
    }

    count = 0;
    for(int i : numbers) {
        if(abs(i) % 2 == 0) {
            count++;
        }
    }

    cout << count << " valor(es) par(es)" << endl;

    count = 0;
    for(int i : numbers) {
        if(abs(i) % 2 != 0) {
            count++;
        }
    }

    cout << count << " valor(es) impar(es)" << endl;

    count = 0;
    for(int i : numbers) {
        if(i > 0) {
            count++;
        }
    }

    cout << count << " valor(es) positivo(s)" << endl;

    count = 0;
    for(int i : numbers) {
        if(i < 0) {
            count++;
        }
    }

    cout << count << " valor(es) negativo(s)" << endl;

    return 0;
}