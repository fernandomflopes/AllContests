#include <iostream>
#include <vector>

using namespace std;

int calculaPosicao(int valor, int modulo) {
    return (valor % modulo);
}

int init(vector<vector<int>> &v, uint size) {
    for(int i = 0; i < size; i++) {
        v.push_back(vector<int>());
    }
}

void print(vector<vector<int>> &v) {
    int linha = 0;
    for(vector<int> l : v) {
        cout << linha << " -> "; 
        for(int c: l) {
            cout << c << " -> ";
        }
        cout << "\\" << endl;
        linha++;
    }
}

int main() {
    int testCases, modulo, tamanhoLista, valor;

    cin >> testCases;

    while(testCases > 0) {
        vector<vector<int>> tabela;
        cin >> modulo >> tamanhoLista;

        init(tabela, modulo);
        while(tamanhoLista > 0) {
            cin >> valor; 
            tabela[calculaPosicao(valor, modulo)].push_back(valor);
            tamanhoLista--;
        }

        print(tabela);
        if(testCases > 1)
            cout << endl;

        testCases--;
    }    


    return 0;
}