#include <iostream>

using namespace std;

int main() {

    int x, y;

    cin >> x >> y;

    if(x > y) 
        swap(x, y);       
    x++;

    while(x < y) {
        if(x % 5 == 2 || x % 5 == 3) {
            cout << x << endl;
        }

        x++;
    }    


    return 0;
}