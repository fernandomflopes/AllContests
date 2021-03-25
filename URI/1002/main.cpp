#include <iostream>
#include <math.h>

using namespace std;

int main() {

    const double n = 3.14159;
    double area, raio;

    cin >> raio;

    area = n * (pow(raio, 2));

    printf("A=%.4lf\n", area);

    return 0;
}