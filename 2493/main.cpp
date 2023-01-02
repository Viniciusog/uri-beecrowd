#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

typedef struct obj {    
    string nome;
    int numero;
    string caractere;
    int correto;
} Obj;

typedef struct conta {
    int n1;
    string n2EResultado;
    int n2;
    int resultado;
} Conta;

int main() {
    int N;
    cin >> N;
    while (N != EOF) {
        Obj vetor[N];
        Conta contas[N];
        vector<string> incorretos;
        
        for (int i = 0 ; i < N; i++) {
            cin >> contas[i].n1 >> contas[i].n2EResultado;

            int indexSeparador = contas[i].n2EResultado.find('=');
            string n2 = contas[i].n2EResultado.substr(0, indexSeparador);
            string resultado = contas[i].n2EResultado.substr(indexSeparador + 1, contas[i].n2EResultado.size() - indexSeparador);
            contas[i].n2 = stoi(n2, NULL, 10);
            contas[i].resultado = stoi(resultado);
        }

        for (int i = 0 ; i < N; i++ ) {
            cin >> vetor[i].nome >> vetor[i].numero >> vetor[i].caractere;
        }

        for (int i = 0; i < N; i++) {
            int n1 = contas[vetor[i].numero - 1].n1;
            int n2 = contas[vetor[i].numero - 1].n2;
            int resultado = contas[vetor[i].numero - 1].resultado;

            if (vetor[i].caractere == "+") {
                if (n1 + n2 == resultado) {
                    vetor[i].correto = 1;
                } else {
                    vetor[i].correto = 0;
                }
            } else if (vetor[i].caractere == "-") {
                if (n1 - n2 == resultado) {
                    vetor[i].correto = 1;
                } else {
                    vetor[i].correto = 0;
                }
            } else if (vetor[i].caractere == "*") {
                if (n1 * n2 == resultado) {
                    vetor[i].correto = 1;
                } else {
                    vetor[i].correto = 0;
                }
            } else if (vetor[i].caractere == "/") {
                if (n1 / n2 == resultado) {
                    vetor[i].correto = 1;
                } else {
                    vetor[i].correto = 0;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            if (vetor[i].correto == 0) {
                incorretos.push_back(vetor[i].nome);
            }
        }

    vector<string> ordenado;
        if (incorretos.size() != N) {
            while (incorretos.size() != 0) {
                string menor = incorretos.at(0);
                for (int i = 1; i < incorretos.size(); i++) {
                    if (incorretos.at(i) < menor) {
                        menor = incorretos.at(i);
                    }
                }
                ordenado.push_back(menor);
                incorretos.erase(incorretos.begin() + )
            }
            
        } else {
            cout << "None Shall Pass!" << endl;
        }


        cin >> N;
        
        
        /* for (int i = 0; i < N; i++) {
            cin >> vetor[i].nome >> vetor[i].numero >> vetor[i].caractere;
        }
        cin >> N; */

    }
}