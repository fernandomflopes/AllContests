#include <iostream>

using namespace std;

int main() {
    

    int ct = 2;
    double n, res;
    double ac = 0;


    while(ct > 0) {

        cin >> n;

        if(n < 0 or n > 10) {
            cout << "nota invalida" << endl;
        } else {
            ac += n;
            ct--;
        }

    }

    res = (ac / 2);

    cout.precision(2);
    cout << "media = " << fixed << res << endl;


    return 0;
}