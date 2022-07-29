#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;

int main() {
    
    int continuar;
    do {
        float n1, n2;

        cin >> n1;
        while (n1 < 0 || n1 > 10) {
            cout << "nota invalida" << endl;
            cin >> n1;
        }

        cin >> n2;
        while (n2 < 0 || n2 > 10) {
            cout << "nota invalida" << endl;
            cin >> n2;
        }

        printf("media = %.2f\n", ((n1 + n2)/2));
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> continuar;
        while (continuar != 1 && continuar != 2) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> continuar;
        }
        
    } while (continuar == 1);

    return 0;
}