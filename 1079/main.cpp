#include <iostream>
using namespace std;

int main() {
    int qtd;
    cin >> qtd;

    // matrix de qtd linhas e 3 colunas
    int numeros[qtd][3];

    for (int i = 0; i < qtd; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> numeros[i][j];
        }
    }

    for (int i = 0; i < qtd; i++) {
        int soma = 0;
        soma += numeros[i][0] * 2;
        soma += numeros[i][1] * 3;
        soma += numeros[i][2] * 5;
        cout << "Média: " << (soma / 10) << endl;
    }
}