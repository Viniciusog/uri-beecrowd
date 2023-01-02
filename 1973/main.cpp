#include <iostream>
using namespace std;

int main() {

    int q;
    cin >> q;
    int cEstrelas[2][q];
    for (int i = 0; i < q; i++) {
        cin >> cEstrelas[0][i];
        cEstrelas[1][i] = 0;
    }

    int continuar = 1;
    int i = 0;
    int par = 0;
    while (continuar) {
        if (cEstrelas[0][i] > 0) {
            // indica que a estrela na posição i foi atacada
            cEstrelas[1][i] = 1;

            if (cEstrelas[0][i] % 2 == 0) {
                par = 1;
            }
            cEstrelas[0][i] = cEstrelas[0][i] - 1;
            
            if (par) {
                i--;
            } else {
                i++;
            }

            if (i < 0 || i == q) {
                continuar = 0;
            }
        } else {
            continuar = 0;
        }
    }

    int soma = 0;
    int ataques = 0;
    for (int i = 0; i < q; i++) {
        soma += cEstrelas[0][i];
        if (cEstrelas[1][i]) {
            ataques++;
        }
    }
    cout << ataques << " " << soma << endl;
}