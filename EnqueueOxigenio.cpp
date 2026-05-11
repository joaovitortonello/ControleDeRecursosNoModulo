#include "TadFila.h"

//CRINADO ENFILAMENTO NO SETOR DE OXIGÊNIO.
void EnqueueOxigenio(FILAOXIGENIO **Primeiro, FILAOXIGENIO **Ultimo) {

    //DECLARNADO A VARIÁVEL "NOVONO" E ALOCANDO A MEMÓRIA.
    FILAOXIGENIO *NovoNo = (FILAOXIGENIO*)malloc(sizeof(FILAOXIGENIO));

    //VERIFICANDO A ALOCAÇÃO DE MEMÓRIA.
    if(NovoNo == NULL) {

        printf("MEMÓRIA NÃO ALOCADA!!\n");

    }

    //SE ACASO FOI
    else {

        //VERIFICANDO SE É O PRIMEIRO DA FILA.
        if (*Ultimo == NULL) {

            //AQUI PEDE O ID DO MÓDULO, QUE É UTILIZADO PARA SABER O VETOR.
            printf("INFORME O MÓDULO:\n");
            scanf("%d", &NovoNo->Modulo);

            //AQUI SOLICITA O RECURSO.
            printf("INFORME A REQUISIÇÃO DOS RECURSOS(OXIGÊNIO):\n");
            scanf("%d", &NovoNo->RequisicaoOxigenio);

            //DEFINE QUE O PRÓXIMO DA FILA É NULO.
            NovoNo->ProxNo = NULL;

            //DEFINE O NOVO DA FILA COMO O PRIMEIRO.
            *Primeiro = NovoNo;

            //DEFINE O NOVO DA FILA COMO O ÚLTIMO.
            *Ultimo = NovoNo;

        }

        //SE A CASO NÃO FOR.
        else {

            //AQUI PEDE O ID DO MÓDULO, QUE É UTILIZADO PARA SABER O VETOR.
            printf("INFORME O MÓDULO:\n");
            scanf("%d", &NovoNo->Modulo);

            ////AQUI SOLICITA O RECURSO.
            printf("INFORME A REQUISIÇÃO DOS RECURSOS(OXIGÊNIO):\n");
            scanf("%d", &NovoNo->RequisicaoOxigenio);

            ////DEFINE QUE O PRÓXIMO DA FILA É NULO.
            NovoNo->ProxNo = NULL;  

            //DEFINE QUE O ÚLTIMO DA FILA, NO ATRIBUTO PRÓXIMO NO, SERA A ESTRUTURA QUE ACABAMOS DE CRIAR.
            (*Ultimo)->ProxNo = NovoNo;
        
        }//FIM DO SEGUNDO ELSE.

    }//FIM DO PRIMEIRO ELSE.

    //ÚLTIMO VIRA O NOVO NÓ, E LIBERO A MEMÓRIA
    *Ultimo = NovoNo;
    NovoNo = NULL;
    free(NovoNo);

}//FIM DO ENQUEUEOXIGÊNIO.