#include "TadFila.h" 

//FUNÇÃO UTILIZADO NO MENU PARA MOSTRAR A FILA DA ÁGUA.
void MostrarAgua(FILAAGUA **Primeiro, FILAAGUA **Ultimo) {

    //ESSA PARTE FOI CRIADO 2 AUXILIAR PARA EVITAR MODIFICAR ALGUM DADOS IMPORTANTE, POR MAIS QUE UTILIZASSE PONTEIRO DUPLO.
    FILAAGUA *Auxiliar = (FILAAGUA*)malloc(sizeof(FILAAGUA));

    FILAAGUA *Auxiliar2 = (FILAAGUA*)malloc(sizeof(FILAAGUA));

    Auxiliar = *Primeiro;

    //IMPRIMIR ATÉ QUE O AUXILIAR SE TORNE NULO.
    while (Auxiliar != NULL) {

        printf("Módulo: [%d], Requisição De Oxigênio: [%d]\n", Auxiliar->IdModulo, Auxiliar->RequisiçãoAgua);

        Auxiliar2 = Auxiliar->ProxNO;

        Auxiliar = Auxiliar2;

    }

    //VERIFICA SE EXISTE FILA E IMPRIME.
    if (*Primeiro == NULL) {

        printf("FILA VAZIA!!\n");

    }
    
}//FIM DO MOSTRARÁGUA.