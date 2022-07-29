#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int numeros[N];
    
    cin >> numeros[0];

    int menor = numeros[0];
    int indiceMenor = 0;
    
    for (int i = 1; i < N; i++) {
        cin >> numeros[i];
        if (numeros[i] < menor) {
            menor = numeros[i];
            indiceMenor = i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << indiceMenor << endl;
    return 0;
}