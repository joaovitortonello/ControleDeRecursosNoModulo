#include "TadFila.h" 

//FUNÇÃO PARA MOSTRAR A FILA DA ENERGIA.
void MostrarEnergia(FILAENERGIA **Primeiro, FILAENERGIA **Ultimo) {

    //ESSA PARTE FOI CRIADO 2 AUXILIAR PARA EVITAR MODIFICAR ALGUM DADOS IMPORTANTE, POR MAIS QUE UTILIZASSE PONTEIRO DUPLO.
    FILAENERGIA *Auxiliar = (FILAENERGIA*)malloc(sizeof(FILAENERGIA));

    FILAENERGIA *Auxiliar2 = (FILAENERGIA*)malloc(sizeof(FILAENERGIA));

    Auxiliar = *Primeiro;

    //IMPRIMIR ATÉ QUE O AUXILIAR SE TORNE NULO.
    while (Auxiliar != NULL) {

        printf("Módulo: [%d], Requisição De Oxigênio: [%d]\n", Auxiliar->IdModulo, Auxiliar->RequisiçãoEnergia);

        Auxiliar2 = Auxiliar->ProxNo;

        Auxiliar = Auxiliar2;

    }

    //SE NÃO EXISTIR NENHUMA FILA, ENTÃO IMPRIME.
    if (*Primeiro == NULL) {

        printf("FILA VAZIA!!\n");

    }
    
}//FIM DE MOSTRAR A FILA DE ENERGIA.