#include "TadFila.h"

//CRIANDO O DESFILAMENTO OU ENVIANDO OS RECURSOS PARA O MÓDULO
void DequeueAgua(FILAAGUA **Primeiro, FILAAGUA **Ultimo, MODULO *Modulo, int qtde) {

    //CRIA A VARIÁVEL DO TIPO "FILAAGUA" E ALOCA A MEMÓRIA.
    FILAAGUA *Auxiliar = (FILAAGUA*)malloc(sizeof(FILAAGUA));

    //VERIFICA SE FOI ALOCADO A MEMÓRIA.
    if (Auxiliar == NULL) {

        printf("MEMÓRIA NÃO ALOCADA!!\n");

    }

    //SE ACASO FOI.
    else {

        //VERIFICA SE EXISTE CONTEÚDO NA FILA.
        if(*Primeiro == NULL) {

            printf("NÃO EXISTE FILA!!\n");

        }

        //SE EXISTIR.
        else {

            //DEFINO AUXILIAR COM O CONTEÚDO DO PRIMEIRO NÓ.
            Auxiliar = *Primeiro;

            //SE O ID DO PRIMEIRO NÓ ESTIVER DENTRO DA QUANTIDADE DE MÓDULOS, PROSSEGUE.
            if(Auxiliar->IdModulo < qtde && Auxiliar->IdModulo >= 0) {

                //MÓDULO EXISTE ÍNDICES, E DENTRO DESSE MÓDULO COM ÍNDICES FOI ATRIBUIDO RECURSOS, SE DENTRO DESSES RECURSOS
                //EXISTIR O MÍNIMO DE RECURSOS DE OXIGÊNIO ELE VAI PODER TRANSFERIR ÁGUA.
                if((Modulo[Auxiliar->IdModulo]).Oxigenio != 0) {

                    printf("ENVIANDO SOLICITAÇÃO DO MÓDULO: [%d], REQUISIÇÃO[ÁGUA]: [%d]\n", Auxiliar->IdModulo, Auxiliar->RequisiçãoAgua);

                    //APÓS VERIFICAR SE EXISTE O MÓDULO ELE INSERE O ID DO MÓDULO DA FILA NO ID DO MÓDULO DA ESTRUTURA MÓDULO.
                    Modulo[Auxiliar->IdModulo].IdModulo = Auxiliar->IdModulo;

                    //ENTÃO O MÓDULO COM ÍNDICE SOMA NO ATRIBUTO ÁGUA A REQUISIÇÃO.
                    Modulo[Auxiliar->IdModulo].Agua += Auxiliar->RequisiçãoAgua;

                }//FIM DO TERCEIRO IF.

                //SE ACASO NÃO HOUVER CONTEÚDO DE OXIGÊNIO NO MÓDULO, ENTÃO.
                else {

                    printf("FALHA AO ENVIAR SOLICITAÇÀO, FOI CONSTATADO FALTA DE RECURSOS[OXIGÊNIO]!!\n");

                }

            }//FIM DO SEGUNDO IF.

            else {

                printf("MÓDULO ERRADO!! DESCARTANDO.\n");

            }

        }//FIM DO SEGUNDO ELSE.

    }//FIM DO PRIMEIRO ELSE.

    //O PRIMEINO NÓ VIRA O PRÓXIMO DA FILA E DEPOIS LIBERA O AUXILIAR DA MEMÓRIA.
    *Primeiro = Auxiliar->ProxNO;
    Auxiliar = NULL;
    free(Auxiliar);

}//FIM DO DEQUEUEAGUA.
