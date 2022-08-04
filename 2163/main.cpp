#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matriz[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }

    int x = 0;
    int y = 0;
    
    int temSabre = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] == 42) {
                
                for (int k = -1; k <= 1; k++) {
                    for (int l = -1; l <= 1; l++) {
                        if ((i + k) >= 0 && (i + k) < N && (j + l) >= 0 && (j + l) < M) {
                            if (k != l && matriz[i + k][j + l] != 7) {
                                temSabre = 0;
                            }
                        } else {
                            //Caso tenha um 42 na primeira linha e na primeira coluna, então não podemos considerar 
                            // como um sabre de luz, pois para que seja, precisa estar totalmente cercado de 7
                            temSabre = 0;
                        }
                    }
                }

                if (temSabre) {
                    x = i;
                    y = j;
                    break;
                }
            }
        }
    }

    // imprimir linha e coluna começando de 1
    if (temSabre) {
        x++;
        y++;
    }
    cout << x << " " << y << endl;
}