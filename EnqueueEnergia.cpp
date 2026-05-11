#include "TadFila.h"

//CRIANDO ENFILAMENTO DA ENERGIA COM O CRITÉRIO DE OXIGÊNIO E ÁGUA.
void EnqueueEnergia(FILAENERGIA **Primeiro, FILAENERGIA **Ultimo) {

    //ALOCANDO MEMÓRIA DO TAMANHO DA ESTRUTURA.
    FILAENERGIA *NovoNo = (FILAENERGIA*)malloc(sizeof(FILAENERGIA));

    //CONFERINDO SE FOI ALOCADO A MEMÓRIA.
    if (NovoNo == NULL) {

        printf("MEMÓRIA NÃO ALOCADA!!\n");

    }//FIM DO PRIMEIRO IF

    //SE FOR ALOCADO PROSSEGUE ELSE.
    else { 

        //VERIFICA SE É O PRIMEIRO DA FILA, SE FOR.
        if(*Ultimo == NULL) {

            //AQUI PEDE O ID DO MÓDULO, QUE É UTILIZADO PARA SABER O VETOR.
            printf("INFORME O MÓDULO:\n");
            scanf("%d", &NovoNo->IdModulo);

            //AQUI SOLICITA O RECURSO.
            printf("INFORME A REQUISIÇÃO DOS RECURSOS(ENERGIA):\n");
            scanf("%d", &NovoNo->RequisiçãoEnergia);

            //DEFINE QUE O PRÓXIMO DA FILA É NULO.
            NovoNo->ProxNo = NULL;

            //DEFINE O NOVO DA FILA COMO O PRIMEIRO.
            *Primeiro = NovoNo;

            //DEFINE O NOVO DA FILA COMO O ÚLTIMO.
            *Ultimo = NovoNo;

        }

        //APARTIR DO PRIMEIRO DA FILA.
        else {

            //AQUI PEDE O ID DO MÓDULO, QUE É UTILIZADO PARA SABER O VETOR.
            printf("INFORME O MÓDULO:\n");
            scanf("%d", &NovoNo->IdModulo);

            //AQUI SOLICITA O RECURSO.
            printf("INFORME A REQUISIÇÃO DOS RECURSOS(ENERGIA):\n");
            scanf("%d", &NovoNo->RequisiçãoEnergia);

            //DEFINE QUE O PRÓXIMO DA FILA É NULO.
            NovoNo->ProxNo = NULL;

            //DEFINE AO ÚLTIMO DA FILA QUE O PRÓXIMO DA FILA SERÁ O ESSE QUE ACABAMOS DE CRIAR.
            (*Ultimo)->ProxNo = NovoNo;

        }//FIM DO SEGUNDO ELSE.

    }//FIM DO PRIMEIRO ELSE.

    //ÚLTIMO VIRA O NOVO NÓ, E LIBERO A MEMÓRIA
    *Ultimo = NovoNo;
    NovoNo = NULL;
    free(NovoNo);

}//FIM DO ENQUEUEENERGIA.