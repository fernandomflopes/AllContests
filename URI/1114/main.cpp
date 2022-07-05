#include <iostream>

using namespace std;

int main() {

    const string senhaCorreta = "2002";    
    string input;

    while(1) {
        cin >> input;

        if(input == senhaCorreta) {
            cout << "Acesso Permitido" << endl;
            break;
        } else {
            cout << "Senha Invalida" << endl; 
        }

    }


    return 0;
}