#include <iostream>
using namespace std;

// Transforma o horário inicial e o horário final em minutos
// Em seguida, se o horário final for maior que o horário inicial, então calculamos a diferença e mostramos a 
// relação de minutos e segundos
// Se o horário final for menor que o horário inicial, então significa que estamos no próximo dia, por isso fazemos
// 24horas*60minutos - tempo inicial em minutos + tempo final em minutos. Assim teremos a quantidade de minutos totais decorridos.
int main() {
    int hI, mI, hF, mF; 
    cin >> hI >> mI >> hF >> mF;

    int mTI, mTF;
    mTI = hI  * 60 + mI;
    mTF = hF  * 60 + mF;

    if (mTI < mTF) {
        int duracaoTotalMinutos = mTF - mTI;
        cout << "O JOGO DUROU " << (duracaoTotalMinutos/60) << " HORA(S) E " <<(duracaoTotalMinutos%60) << " MINUTO(S)" << endl;        
    } else if (mTI >= mTF) {
        int duracaoTotalMinutos = (24*60)-mTI + mTF;
        cout << "O JOGO DUROU " << (duracaoTotalMinutos/60) << " HORA(S) E " <<(duracaoTotalMinutos%60) << " MINUTO(S)" << endl;
    }
    return 0;
}