#include <iostream>
using namespace std;

int main() {
    int inicio, fim;
    cin >> inicio;
    cin >> fim;

    if (inicio < fim) {
        cout << "O JOGO DUROU " << fim - inicio << " HORA(S)" << endl;
    } else if (inicio > fim) {
        cout << "O JOGO DUROU " << 24 - inicio + fim << " HORA(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << 24 << " HORA(S)" << endl;
    }
    return 0;
}