// ** Conteúdo do arquivo TadLista.h **
typedef struct noh Noh;

// Métodos primitivos de uma lista
Noh *criar();
Noh *inserir(Noh *cabeca, int valor);
int remover(Noh *cabeca, int valor);

// Métodos não primitivos de uma lista
void imprimir(Noh *cabeca);