#include <iostream>
using namespace std;

int main() {
    int tCoelho = 0, tSapo = 0, tRato = 0;

    int qtd;
    cin >> qtd;

    for (int i = 0; i < qtd; i++) {
        int qtdAnimal;
        char tipoAnimal;
        cin >> qtdAnimal >> tipoAnimal;
        cout << "Tipo animal: " << tipoAnimal << endl;
        if (tipoAnimal == 'R') {
            tRato+=qtdAnimal;
        } else if (tipoAnimal == 'S') {
            tSapo+=qtdAnimal;
        } else if (tipoAnimal == 'C') {
            tCoelho+=qtdAnimal;
        }
    }
    int total = tRato + tCoelho + tSapo;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << tCoelho << endl;
    cout << "Total de ratos: " << tRato << endl;
    cout << "Total de sapos: " << tSapo << endl;
    cout << "Percentual de coelhos: " << (tCoelho / total) << endl;
}
