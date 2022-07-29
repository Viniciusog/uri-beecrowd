#include <iostream>
using namespace std;

int main() {

    int numero = 7;
    int cont = 0;
    for (int i = 1; i <= 9; i +=2) {
        while (cont < 3) {
            cout <<  "I=" << i << " J=" << (numero - cont) << endl;
            cont++;
        }
        cont = 0;
        numero += 2;
    }
    return 0;
}