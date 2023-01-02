#include <stdio.h>
#include <stdlib.h>
#include "TadLista.h"

typedef struct noh {
    int conteudo;
    Noh *proximo;
} Noh;

Noh *criar() {
    Noh *cabeca;
    // Alocar espaço no Heap (Memória principal) para o nó cabeça
    cabeca = (Noh *) malloc(sizeof(Noh));
    // Uma lista vazia tem o nó cabeça apontando para NULL
    cabeca->proximo = NULL; 
    return cabeca;
}

Noh *inserir(Noh *cabeca, int valor) {
    // Criação de um novo nó para ser inserido na lista
    Noh *novo;
    novo = (Noh *) malloc(sizeof(Noh));
    novo->conteudo = valor;
    novo->proximo = cabeca->proximo;
    
    /*
        Considerando que isto é uma lista vazia: [Nó cabeça]-> NULL
        Para inserirmos um elemento 15 dentro dessa lista, precisamos fazer o 
        nó cabeça apontar para esse novo elemento sem quebrar toda a estrutura.
        
        Assim, após a inserção elemento 15, a lista ficará assim:
        [Nó cabeça]->[15]->NULL
        
        Se continuarmos inserindo o valor 8 por exemplo, teremos o seguinte:
        [Nó cabeça]->[8]->[15]->NULL
        
        Ou seja, o novo elemento a ser adicionado sempre ficará logo em seguida do nó cabeça,
        de forma que o nó cabeça sempre aponte para o novo elemento.
    */
    
    cabeca->proximo = novo;
    // Por praticidade, vamos retornar um ponteiro para o novo elemento inserido dentro da lista
    return novo;
}

// Remove o primeiro elemento que contém um determinado valor
int remover(Noh *cabeca, int valor) {
    
    // Só pode tentar remover da lista caso ela não seja vazia.
    // Retorna '\0' indicando que o nó de conteúdo "valor" não foi encontrado.
    if (cabeca->proximo == NULL) {
        return '\0';
    }

    Noh *atual;
    atual = cabeca->proximo;
    
    /*
    Considerando que temos a seguinte lista: [Nó cabeça]->[8]->[15]->[46]->[7]->NULL
    e que queremos remover o número 15.
    
    Para isso acontecer, o elemento de conteúdo [8] deverá apontar para 
    o elemento de número [46], removendo o elemento [15] da lista e 
    ficando assim: [Nó cabeça]->[8]->[46]->[7]->NULL
    */

    // Se o primeiro elemento tiver conteúdo igual ao valor, vamos 
    // fazer o nó cabeça apontar para o nó correto.
    if (atual->conteudo == valor) {
        //Antes da remoção: [Nó cabeça]->[Atual]->[Outro]->NULL
        //Depois da remoção: [Nó cabeça]->[Outro]->NULL
        cabeca->proximo = atual->proximo;
        int conteudo = atual->conteudo;
        // Não basta apenas remover o nó da lista, temos que desocupar o espaço que esse nó
        // estava ocupando na memória principal (Heap), para não termos vazamento de memória.
        free(atual);
        return conteudo;
    }
    
    /*
    Caso o elemento esteja no meio da lista, precisa percorrer a lista
    até encontrar o elemento a ser removido.
    
    Um cuidado é:
    Se temos a lista: [Nó cabeça]->[8]->[15]->[46]->[7]->NULL
    e o elemento a ser removido é o [46], não podemos percorrer a lista
    até chegar no [46], pois dessa forma não conseguiremos fazer 
    o elemento [15] apontar para o "próximo nó" do nó [46], já que não 
    temos um ponteiro apontando para o [15].
    
    Para realizar essa função corretamente, temos que percorrer a lista
    até chegar no nó anterior ao elemento que queremos remover. 
    Assim, iremos conseguir manter a estrura correta da lista.
    Ex:
                           Nó anterior ao [46] que vamos remover  
                                         |
    Antes de remover: [Nó cabeça]->[8]->[15]->[46]->[7]->NULL
    Depois de remover: [Nó cabeça]->[8]->[15]->[7]->NULL
    */
    while (atual != NULL && atual->proximo != NULL) {
        // Se encontrou o nó a ser removido no meio da lista
        if (atual->proximo->conteudo == valor) {
            Noh *paraRemover = atual->proximo;
            int conteudo = paraRemover->conteudo;
            // No exemplo anterior, faz o [15] apontar para o próximo do [46]
            atual->proximo = paraRemover->proximo;
            // Libera memória utilizada pelo elemento removido da lista
            free(paraRemover);
            return conteudo;
        }
        // Enquanto não encontrou o nó para remover e não chegou no fim da lista, passa
        // para o próximo nó e repete o processo
        atual = atual->proximo;
    }
    // Se não tiver elemento na lista com o conteúdo sendo o valor.
    return '\0';
}

void imprimir(Noh *cabeca) {
    // Começando do primeiro nó
    Noh *atual = cabeca->proximo;
    // Percorre todos os nós da lista, imprimindo o conteúdo de cada um.
    while(atual != NULL) {
        printf("%d ", atual->conteudo);
        atual = atual->proximo;
    }
}
