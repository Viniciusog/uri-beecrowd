#include <iostream>
using namespace std;

int main() {

    int qtdTestes;
    cin >> qtdTestes;

    double matriz[qtdTestes][4];

    for (int i = 0; i < qtdTestes; i++ ) {
        double pA, pB, cA, cB;
        cin >> pA >> pB >> cA >> cB;
        matriz[i][0] = pA;
        matriz[i][1] = pB;
        matriz[i][2] = cA;
        matriz[i][3] = cB;
    }

    int popA = 0, popB = 0;
    for (int i = 0; i < qtdTestes; i++) {
        popA = matriz[i][0];
        popB = matriz[i][1];

        int anos = 0;
        while (popA <= popB) {
            popA = popA * (1+matriz[i][2]/100); // pop * taxa de crescimento
            popB = popB * (1+matriz[i][3]/100);
            anos++;
            if (anos > 100) {
                break;
            }
        }

        if (anos > 100) {
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << anos << " anos." << endl;
        }
    } 
    return 0;
}