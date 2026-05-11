#include "TadFila.h" 

//FUNÇÃO PARA MOSTRAR A FILA DO OXIGÊNIO.
void MostrarOxigenio(FILAOXIGENIO **Primeiro, FILAOXIGENIO **Ultimo) {

    //ESSA PARTE FOI CRIADO 2 AUXILIAR PARA EVITAR MODIFICAR ALGUM DADOS IMPORTANTE, POR MAIS QUE UTILIZASSE PONTEIRO DUPLO.

    FILAOXIGENIO *Auxiliar = (FILAOXIGENIO*)malloc(sizeof(FILAOXIGENIO));

    FILAOXIGENIO *Auxiliar2 = (FILAOXIGENIO*)malloc(sizeof(FILAOXIGENIO));

    Auxiliar = *Primeiro;

    //IMPRIMIR ATÉ QUE O AUXILIAR SE TORNE NULO.
    while (Auxiliar != NULL) {

        printf("Módulo: [%d], Requisição De Oxigênio: [%d]\n", Auxiliar->Modulo, Auxiliar->RequisicaoOxigenio);

        Auxiliar2 = Auxiliar->ProxNo;

        Auxiliar = Auxiliar2;

    }

    //SE NÃO EXISTIR CONTÉUDO DENTRO DO PRIMEIRO DA FILA, ENTÃO, IMPRIME.
    if (*Primeiro == NULL) {

        printf("FILA VAZIA!!\n");

    }
    
}//FIM DO MOSTRAR FILA DO OXIGÊNIO.