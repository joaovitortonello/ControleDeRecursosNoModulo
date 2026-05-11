#include "TadFila.h"

//FUNÇÃO PARA DESENFILEIRAR ERNERGIA COM O REQUISITO DE OXIGÊNIO E ÁGUA.
void DequeueEnergia(FILAENERGIA **Primeiro, FILAENERGIA **Ultimo, MODULO *Modulo, int qtde) {

    //ALOCANDO MEMÓRIA.
    FILAENERGIA *Auxiliar = (FILAENERGIA*)malloc(sizeof(FILAENERGIA));

    //VERIFICANDO SE FOI ALOCADO MEMÓRIA.
    if (Auxiliar == NULL) {

        printf("NÃO EXISTE FILA!!\n");

    }

    //SE ACASO FOR.
    else {

        //VEIRIFCA SE EXISTE FILA.
        if(*Primeiro == NULL) {

            printf("NÃO EXISTE FILA!!\n");

        }

        else {

            //DEFINO AUXILIAR COM O CONTEÚDO DO PRIMEIRO NÓ.
            Auxiliar = *Primeiro;

            //SE O ID DO PRIMEIRO NÓ ESTIVER DENTRO DA QUANTIDADE DE MÓDULOS, PROSSEGUE.
            if(Auxiliar->IdModulo < qtde && Auxiliar->IdModulo >= 0) {

                //MÓDULO EXISTE ÍNDICES, E DENTRO DESSE MÓDULO COM ÍNDICES FOI ATRIBUIDO RECURSOS, SE DENTRO DESSES RECURSOS
                //EXISTIR O MÍNIMO DE RECURSOS DE OXIGÊNIO E ÁGUA ELE VAI PODER TRANSFERIR ENERGIA.
                if((Modulo[Auxiliar->IdModulo]).Oxigenio != 0 && (Modulo[Auxiliar->IdModulo]).Agua != 0) {

                    printf("ENVIANDO SOLICITAÇÃO DO MÓDULO: [%d], REQUISIÇÃO[ENERGIA]: [%d]\n", Auxiliar->IdModulo, Auxiliar->RequisiçãoEnergia);

                    //APÓS VERIFICAR SE EXISTE O MÓDULO ELE INSERE O ID DO MÓDULO DA FILA NO ID DO MÓDULO DA ESTRUTURA MÓDULO.
                    Modulo[Auxiliar->IdModulo].IdModulo = Auxiliar->IdModulo;

                    //ENTÃO O MÓDULO COM ÍNDICE SOMA NO ATRIBUTO ÁGUA A REQUISIÇÃO.
                    Modulo[Auxiliar->IdModulo].Energia += Auxiliar->RequisiçãoEnergia;

                }//FIM DO TERCEIRO IF.

                //SE FALTAR RECURSOS NECESSÁRIO QUE NO CASO SERIA, OXIGÊNIO E ÁGUA, ELE IMPRIME.
                else {

                    printf("FALHA AO ENVIAR SOLICITAÇÀO, FOI CONSTATADO FALTA DE RECURSOS[OXIGÊNIO E ÁGUA]!!\n");

                }

            }//FIM DO SEGUNDO IF.

            else {

                printf("MÓDULO ERRADO!! DESCARTANDO.\n");

            }

        }//FIM DO SEGUNDO ELSE.

    }//FIM PRIMEIRO ELSE 

    //O PRIMEINO NÓ VIRA O PRÓXIMO DA FILA E DEPOIS LIBERA O AUXILIAR DA MEMÓRIA.
    *Primeiro = Auxiliar->ProxNo;
    Auxiliar = NULL;
    free(Auxiliar);
    
}//FIM DO DEQUEUEENERGIA.