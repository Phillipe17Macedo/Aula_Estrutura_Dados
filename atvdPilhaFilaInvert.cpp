#include <iostream>

struct No {
    int valor;
    No *prox;
};

struct Pilha {

    No *topo;
    int n;

    Pilha() {
        topo = NULL;
        n = 0;
    }

    bool vazia() { // O(1)
        return (topo == NULL);
    }

    void inserir(int v) { // O(1)
        No *novo = new No();
        novo->valor = v;
        if (vazia()) {
            novo->prox = NULL;
            topo = novo;
        } else {
            novo->prox = topo;
            topo = novo;
        }
        n++;
    }

    int tamanho() { // O(1)
        return n;
    }

    void remover() { // O(1)
        if (!vazia()) {
            if (tamanho() == 1) {
                No *aux = topo;
                topo = NULL;
                delete(aux);
            } else {
                No *aux = topo;
                topo = topo->prox;
                delete(aux);
            }
            n--;
        }
    }
    void inverterPilha() {
        if (vazia() || tamanho() == 1) {
            return; 
        }
        No *anterior = NULL;
        No *atual = topo;
        No *proximo = topo->prox;
        while (proximo != NULL) {
            atual->prox = anterior;
            anterior = atual;
            atual = proximo;
            proximo = proximo->prox;
        }
        atual->prox = anterior;
        topo = atual;
    }
};

int main() {

    Pilha p;
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int op;
        scanf("%d", &op);
        p.inserir(op);
    } 

    printf("\nPilha antes de ser invertida:\n");
    No *atual = p.topo;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }

    p.inverterPilha();

    printf("\nPilha Invertida:\n");
    atual = p.topo;
    while (atual != NULL) {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }

    return 0;
}
