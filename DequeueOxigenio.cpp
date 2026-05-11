#include "TadFila.h"

//FUNÇÃO PARA DESENFILEIRAR OXIGENIO/ENVIAR OS RECURSOS PARA O MÓDULO.
void DequeueOxigenio(FILAOXIGENIO **Primeiro, FILAOXIGENIO **Ultimo, MODULO *Modulos, int qtde) {

    //DECLARANDO O AUXILIAR.
    FILAOXIGENIO *Auxiliar;

    //ALOCANDO A MEMÓRIA.
    Auxiliar = (FILAOXIGENIO*)malloc(sizeof(FILAOXIGENIO));     

    //VERIFICANDO SE FOI ALOCADO A MAMÓRIA.
    if (Auxiliar == NULL) {

        printf("MEMÓRIA NÃO ALOCADA!!\n");

    }

    //SE ACASO FOR.S
    else {

        //VERIFICANDO SE EXISTE FILA.
        if(*Primeiro == NULL) {

            printf("NÃO EXISTE FILA!!\n");

        }

        //SE EXISTIR VAI DESENFILAR
        else {

            //AQUI CRIOU UMA CÓPIA DO PRIMEIRO DA FILA PARA CHECAR SE O MÓDULO INSERIDO É COMPATÍVEL COM OS QUE FOI CRIADO.
            Auxiliar = *Primeiro;

            if (Auxiliar->Modulo < qtde && Auxiliar->Modulo >= 0) {

                printf("ENVIANDO SOLICITAÇÃO DO MÓDULO: [%d], REQUISIÇÃO[OXIGÊNIO]: [%d]\n", Auxiliar->Modulo, Auxiliar->RequisicaoOxigenio);

                //APÓS VERIFICAR SE EXISTE O MÓDULO ELE INSERE O ID DO MÓDULO DA FILA NO ID DO MÓDULO DA ESTRUTURA MÓDULO.
                Modulos[Auxiliar->Modulo].IdModulo = Auxiliar->Modulo;

                //O ID DO MÓDULO QUE ESTÁ DENTRO É O MESMO QUE NO VETOR, OU SEJA PARA INSERIR O REURSO BASTA SABER O ID DO MÓDULO,
                //LOGO ISSO, VAI SOMANDO OS RECURSO ENVIADO.
                Modulos[Auxiliar->Modulo].Oxigenio += Auxiliar->RequisicaoOxigenio;

            }

            //SE ACASO NÃO EXISTIR O MÓDULO.
            else {

                printf("MÓDULO ERRADO!! DESCARTANDO.\n");

            }//FIM TERCEIRO ELSE.

        }//FIM SEGUNDO ELSE.

    }//FIM TERCEIRO ELSE.

    //O PRIMEINO NÓ VIRA O PRÓXIMO DA FILA E DEPOIS LIBERA O AUXILIAR DA MEMÓRIA.
    *Primeiro = Auxiliar->ProxNo;
    Auxiliar = NULL;
    free(Auxiliar);
    
}//FIM DO DEQUEUEOXIGÊNIO.