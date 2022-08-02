#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int pA;
    cin >> pA;
    int ultimoEhPico = 0;
    int valido = 1;
    for (int i = 1; i < N; i++) {
        int sA;
        cin >> sA;

        if (sA > pA) {
            if (i > 1 && ultimoEhPico) {
                valido = 0;
            }
            ultimoEhPico = 1;
            pA = sA;
        } else if (sA < pA) {
            if (i > 1 && !ultimoEhPico) {
                valido = 0;
            }
            ultimoEhPico = 0;
            pA = sA;
        } else {
            valido = 0;
        }
    }   
    cout << valido << endl;
}