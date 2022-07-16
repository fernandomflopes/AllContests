#include <iostream>

using namespace std;

int main()
{

    int ct;
    double m, n, r;

    cin >> ct;

    while (ct > 0)
    {
        cin >> m >> n;

        if (n == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            r = m / n;

            cout.precision(1);
            cout << fixed;
            cout << r << endl;
        }
        ct--;
    }

    return 0;
}