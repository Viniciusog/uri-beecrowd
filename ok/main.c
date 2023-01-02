#include <stdio.h>
#include <stdlib.h>
#include "TadLista.h"

int main() {

    Noh * cabeca;
    cabeca = criar();

    inserir(cabeca, 7);
    inserir(cabeca, 46);
    inserir(cabeca, 15);
    inserir(cabeca, 8);

    imprimir(cabeca); //Resultado: 8 15 46 7

    remover(cabeca, 46);

    printf("\nAo remover [46]: ");
    imprimir(cabeca); //Resultado: 8 15 7
}