# include < stdio.h >

struct  Não {
    valor int ;
    Não *prox;
};

struct  Lista {
    Não *cabeca, *cauda;
    int n;

    Lista () {
        cabeca = cauda = NULL ;
        n = 0 ;
    }

    bool  vazio () { // O(1)
        return (cabeca == NULL );
    }

    void  inserirInicio ( int v) { // O(1)
        Não *novo = novo  Não ();
        novo-> valor = v;
        se ( vazio ()) {
            novo-> prox = NULL ;
            cabeça = novo;
            cauda = novo;
        } senão {
            novo-> prox = cabeca;
            cabeça = novo;
        }
        n++;
    }

    void  inserirFinal ( int v) { // O(1)
        Não *novo = novo  Não ();
        novo-> valor = v;
        se ( vazio ()) {
            novo-> prox = NULL ;
            cabeça = novo;
            cauda = novo;
        } senão {
            novo-> prox = NULL ;
            cauda-> prox = novo;
            cauda = novo;
        }
        n++;
    }

    void  imprimir () { // O(n)
        /* for (Não *aux = cabeca; aux != NULL; aux = aux->prox) */
        Não *aux = cabeça;
        while (aux != NULL ) {
            printf ( " %d \n " ,aux-> valor );
            aux = aux-> prox ;
        }
    }

    /* tamanho() { // O(n)
        int t = 0;
        Não *aux = cabeça;
        while (aux != NULL) {
            t++;
            aux = aux->prox;
        }
        retornar t;
    } */

     tamanho int () { // O(1)
        retornar n;
    }

    void  removeInicio () { // O(1)
        se (! vazio ()) {
            if ( tamanho () == 1 ) {
                Não *aux = cabeça;
                cabeça = NULL ;
                cauda = NULO ;
                excluir (aux);
            } senão {
                Não *aux = cabeça;
                cabeca = cabeca-> prox ;
                excluir (aux);
            }
            n--;
        }
    }

    void  removeFinal () { // O(n)
        se (! vazio ()) {
            if ( tamanho () == 1 ) {
                Não *aux = cabeça;
                cabeça = NULL ;
                cauda = NULO ;
                excluir (aux);
            } senão {
                Não *penúltimo = cabeça;
                while (penúltimo-> prox != cauda) {
                    penultimo = penultimo-> prox ;
                }
                deletar (cauda);
                cauda = penúltimo;
                cauda-> prox = NULL ;
            }
            n--;
        }
    }

    // exercício 1
    void  reduzirLista ( int n) {
        int n;
        if (n < tamanho ()) {
            for ( int i = 0 ; i < tamanho (); i++) {
                removeFinal ();
            }
        } senão {
            for ( int i = 0 ; i < n; i++) {
                removeFinal ();
            }
        }
    }

    // exercício 2 (errado)
    void  removeSegundoElemento (){
        se (! vazio ()) {
            if ( tamanho () <= 1 ) {
                quebrar ;
            } senão {
                Não *aux = cabeca-> prox ;
                Não *aux2 = aux-> prox ;
                excluir (aux);
            }
            n--;
        }
    }

    // exercício 3
    void  inserirTamanhoFinal () {
        int v = tamanho ();
        inserirFinal (v);
    }

    // exercício 4
    void  inserirNCrescente ( int n) {
        int n, aux = 1 ;
        for ( int i = 0 ; i < n; i++){
            inserirFinal (aux);
            auxiliar++;
        }
    }

    // exercício 5 (errado)
   void  inserirPenultimo () {
        Não *novo = novo  Não ();
        novo-> valor = v;
        if ( tamanho () <= 1 ) {
            quebrar ;
        } senão {
            Não *aux = cauda;
            cauda = novo;
            cauda -> prox = aux;
        }
        n++;
    }
        
   }

};

int  principal () {

    Lista l;
    eu. insiraInicio ( 5 );
    eu. insiraInicio ( 7 );
    eu. insiraInicio ( 10 );
    eu. inserirFinal ( 8 );
    eu. inserirFinal ( 2 );
    eu. inserirFinal ( 3 );
    eu. removedorInicio ();
    eu. removedorInicio ();
    eu. removedorInicio ();
    eu. imprimir ();

    // printf("%d\n", l.tamanho());

    retorna  0 ;
}