#include "TadFila.h"

//CRIANDO ENFILAMENTO DA AGUA COM O CRITÉRIO DE OXIGÊNIO.
void EnqueueAgua(FILAAGUA **Primeiro, FILAAGUA **Ultimo) {

    //ALOCANDO MEMÓRIA DO TAMANHO DA ESTRUTURA.
    FILAAGUA *NovoNo = (FILAAGUA*)malloc(sizeof(FILAAGUA));

    //CONFERINDO SE FOI ALOCADO A MEMÓRIA.
    if (NovoNo == NULL) {

        printf("MEMÓRIA NÃO ALOCADA!!\n");

    }

    //SE FOR ALOCADO PROSSEGUE ELSE.
    else {
        
            //VERIFICA SE É O PRIMEIRO DA FILA.
            if(*Ultimo == NULL) {

                //AQUI PEDE O ID DO MÓDULO, QUE É UTILIZADO PARA SABER O VETOR.
                printf("INFORME O MÓDULO:\n");
                scanf("%d", &NovoNo->IdModulo);

                //AQUI SOLICITA O RECURSO.
                printf("INFORME A REQUISIÇÃO DOS RECURSOS(ÁGUA):\n");
                scanf("%d", &NovoNo->RequisiçãoAgua);

                //DEFINE QUE O PRÓXIMO DA FILA É NULO.
                NovoNo->ProxNO = NULL;

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
                printf("INFORME A REQUISIÇÃO DOS RECURSOS(ÁGUA):\n");
                scanf("%d", &NovoNo->RequisiçãoAgua);

                //DEFINE QUE O PRÓXIMO DA FILA É NULO.
                NovoNo->ProxNO = NULL;

                //DEFINE QUE O ÚLTIMO NÓ, O ATRIBUTO PRÓXIMO NÓ SERÁ OQUE ACABOU DE SER CRIADO.
                (*Ultimo)->ProxNO = NovoNo;

            }//FIM DO SEGUNDO ELSE.

    }//FIM DO PRIMEIRO ELSE.

    //ÚLTIMO QUE ESTAVA NA FILA RECEBE O NOVO NÓ, E SE TORNA O ÚLTIMO E LIBERA A MEMÓRIA.
    *Ultimo = NovoNo;
    NovoNo = NULL;
    free(NovoNo);

}//FIM DO ENQUEUEAGUA.