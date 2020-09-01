#include <iostream>

using namespace std;

int main() {

    const double n = 3.14159;   
    double area, raio;

    cin >> raio;

    area = n * (raio * raio);
    cout << "A=" << area << endl;

    return 0;
}