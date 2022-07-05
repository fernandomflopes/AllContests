#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double somador = 0;
    double resultado = 0;
    double entrada = 0;
    int iterador = 0;

    while (1) {
        cin >> entrada;

        if(entrada < 0) {
            break;
        }

        somador = somador + entrada;
        iterador++;
    }

    resultado = (somador / iterador);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << resultado << std::endl;

    return 0;
}