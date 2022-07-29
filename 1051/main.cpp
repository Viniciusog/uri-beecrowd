#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

static double impostoAte3000(double salario) {
    return (salario - 2000) * 0.08;
}

static double impostoAte4500(double salario) {
    return (1000 * 0.08) + (salario - 3000) * 0.18;
}

static double impostoMais4500(double salario) {
    return (1000 * 0.08) + (1500 * 0.18) + (salario - 4500) * 0.28;
}


int main() {
    double salario;
    cin >> salario;

    double valor = 4.556789;

    cout << "Valor: " << setprecision(2) << valor << endl;

    if (salario <= 2000) {
        cout  << "Isento" << endl;
    } else if (salario > 2000 && salario <= 3000) {
        printf("R$ %.2f\n", impostoAte3000(salario));
    } else if (salario > 3000 && salario <= 4500) {
        printf("R$ %.2f\n", impostoAte4500(salario));    
    } else {
        printf("R$ %.2f\n", impostoMais4500(salario));    
    }
    return 0;
}