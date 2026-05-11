#include "TadFila.h" 

void Menu() {

    //OPERADOR INICIAL PARA USAR UMA FUNÇÃO RECURSIVA, WHILE.
    int op = -1;

    //CRIANDO O TIPO DE DADO MODULO E DECLARANDO COMO NULO.
    MODULO *Modulos = NULL;

    // DEFININDO E ALOCANDO A MEMÓRIA PARA PRIMEIRO DA FILA E O ÚLTIMO.
    FILAOXIGENIO *PrimeiroOxigenio = (FILAOXIGENIO*)malloc(sizeof(FILAOXIGENIO));
    FILAOXIGENIO *UltimoOxigenio = (FILAOXIGENIO*)malloc(sizeof(FILAOXIGENIO));  
    PrimeiroOxigenio = NULL; 
    UltimoOxigenio = NULL;


    // DEFININDO E ALOCANDO A MEMÓRIA PARA PRIMEIRO DA FILA E O ÚLTIMO.
    FILAAGUA *PrimeiraAgua = (FILAAGUA*)malloc(sizeof(FILAAGUA));
    FILAAGUA *UltimaAgua = (FILAAGUA*)malloc(sizeof(FILAAGUA));
    PrimeiraAgua = NULL;
    UltimaAgua = NULL;

    // DEFININDO E ALOCANDO A MEMÓRIA PARA PRIMEIRO DA FILA E O ÚLTIMO.
    FILAENERGIA *PrimeiraEnergia = (FILAENERGIA*)malloc(sizeof(FILAENERGIA));
    FILAENERGIA *UltimaEnergia = (FILAENERGIA*)malloc(sizeof(FILAENERGIA));
    PrimeiraEnergia = NULL;
    UltimaEnergia = NULL;

    //FNÇÃO PARA CRIAR E ALOCAR MEMÓRIA NOS MÓDULOS.
    printf("-------- CRIAR MÓDULO --------\n");

    //VARIÁVEL PARA LER A QUANTIDADE DE MÓDULOS EXISTENTES.
    int qtde = 0;

    printf("INFORME QUANTOS MÓDULOS A ESTAÇÃO TEM?\n");
    scanf("%d", &qtde);

    //ALOCANDO MEMÓRIA PARA OS MÓDULOS.
    Modulos = (MODULO*)malloc(qtde * sizeof(MODULO));

    //SE HOUVER UM ERRO DE ALOCAÇÃO DE MEMÓRIA.
    if (Modulos == NULL) {

        printf("MEMÓRIA NÃO ALOCADA!!\n");

    }

    //VAI CRIAR O NÚMERO TOTAL PEDIDO PELO USUÁRIO, USANDO UMA FUNÇÃO RECURSIVA.
    for (int i = 0; i < qtde; i++) {

        Modulos[i].IdModulo = i;

        printf("MÓDULO [%d], CRIADO COM SUCESSO.\n", Modulos[i].IdModulo);

    }

    //LIBERA A MEMÓRIA.
    free(Modulos);

    //AGUARDA 5 SEGUNDOS.
    sleep(5);

    while (op != 0) { 

        //DENTRO DA BIBLIOTECA "UNISTD.H" POSSUÍ UMA FUNÇÃO PARA LIMPAR O 
        //TERMINAL PARA NÃO POLUIR A TELA, DESIGN CENTRADO AO USUÁRIO
        system("clear");

        printf("MÓDULOS EXISTENTES: \n");

        //UTILIZA TAMBÉM UMA FUNÇÃO RECURSIVA PARA MOSTRAR OS MÓDULOS.
        for (int i = 0; i < qtde; i++) {

            printf("[%d]", i);

        }

        //MENU DE OPÇÕES
        printf("\n-------- MENU --------\n\n");

        printf("-------- FILA OXIGÊNIO --------\n\n");

        printf("<1> ENQUEUE(ENFILEIRAR) OXIGENIO\n");
        printf("<2> DEQUEUE(DESENFILEIRAR) OXIGÊNIO\n");
        printf("<3> MOSTRAR FILA OXIGENIO\n\n");

        printf("-------- FILA ÁGUA --------\n\n");

        printf("<4> ENQUEUE(ENFILEIRAR) ÁGUA (NECESSÁRIO OXIGÊNIO CADA MÓDULO)\n");
        printf("<5> DEQUEUE(DESENFILEIRAR) ÁGUA\n");
        printf("<6> MOSTRAR FILA ÁGUA\n\n");

        printf("-------- FILA ENERGIA --------\n\n");

        printf("<7> ENQUEUE(ENFILEIRAR) ENERGIA (NECESSÁRIO OXIGÊNIO E ÁGUA CADA MÓDULO)\n");
        printf("<8> DEQUEUE(DESENFILEIRAR) ENERGIA\n");
        printf("<9> MOSTRAR FILA ENERGIA\n\n");

        printf("-------------------------------\n\n");

        printf("<10> MOSTRAR EXTRATO COMPLETO DE CADA MÓDULO\n");
        printf("<0> SAIR\n");
        scanf("%d", &op);

        //UTILIZA-SE SWITCH PARA QUE OCORRA INTERAÇÃO DO USUÁRIO COM O SISTEMA.
        switch (op) {

        //FUNÇÃO PARA SOLICITAR OXIGENIO NO MÓDULO.
        case 1: {

            EnqueueOxigenio(&PrimeiroOxigenio, &UltimoOxigenio);

        }
            break;

        //FUNÇÃO PARA ENVIAR OXIGENIO NO MÓDULO.
        case 2: {

            DequeueOxigenio(&PrimeiroOxigenio, &UltimoOxigenio, Modulos, qtde);
    
            //AGUARDA 3 SEGUNDOS PARA PROSEGUIR.
            sleep(3);

        }

            break;

        //FUNÇÃO PARA MOSTRAR A FILA DO OXIGENIO.
        case 3: {

            MostrarOxigenio(&PrimeiroOxigenio, &UltimoOxigenio);

            //AGUARDA 5 SEGUNDOS PARA PROSEGUIR.
            sleep(5);

        }

            break;

        //FUNÇÃO PARA SOLICITAR ÁGUA NO MÓDULO.
        case 4: {

            EnqueueAgua(&PrimeiraAgua, &UltimaAgua);

        }
        
            break;

        //FUNÇÃO A ENVIAR AGUA NO MÓDULO, COM A CONDIÇÃO DE QUE O MÓDULO TENHA OXIGÊNIO.
        case 5: {

            DequeueAgua(&PrimeiraAgua, &UltimaAgua, Modulos, qtde);

            //AGUARDA 5 SEGUNDOS PARA PROSEGUIR.
            sleep(3);

        }

            break;

        //FUNÇÃO PARA MOSTRAR FILA DA ÁGUA.
        case 6: {

            MostrarAgua(&PrimeiraAgua, &UltimaAgua);

            //AGUARDA 5 SEGUNDOS PARA PROSEGUIR.
            sleep(5);

        }

            break;

        //FUNÇÃO PARA SOLICITAR ENERGIA PARA O MÓDULO.
        case 7: {

            EnqueueEnergia(&PrimeiraEnergia, &UltimaEnergia);

        }

            break;

        //FUNÇÃO PARA ENVIAR ENERGIA PARA O MÓDULO.
        case 8: {

            DequeueEnergia(&PrimeiraEnergia, &UltimaEnergia, Modulos, qtde);

            //AGUARDA 5 SEGUNDOS PARA PROSEGUIR.
            sleep(3);

        }

            break;

        //FUNÇÃO PARA MOSTRAR A FILA DA ENERGIA.
        case 9: {

            MostrarEnergia(&PrimeiraEnergia, &UltimaEnergia);

            //AGUARDA 5 SEGUNDOS PARA PROSEGUIR.
            sleep(5);

        }

            break;

        //AQUI MOSTRAR TODO O HISTÓRICO DE RECURSOS RECEBIDO PELO MÓDULO, UTILIZA-SE TAMBÉM RECURSIVIDADE.
        case 10: {

            for (int i = 0; i < qtde; i++) {

                printf("-------- EXTRATO COMPLETO DO MÓDULO --------\n");
                printf("MÓDULO [%d], OXIGÊNIO [%d].\n", i, Modulos[i].Oxigenio);
                printf("MÓDULO [%d], ÁGUA [%d].\n", i, Modulos[i].Agua);
                printf("MÓDULO [%d], ENERGIA [%d].\n\n", i, Modulos[i].Energia);

                //ESPERA 5 SEGUNDOS.
                sleep(5);

            }

        }

            break;

        //PADRÃO DEIXEI VÁZIO PARA, RETORNAR AO TOPO.
        default:

            break;

        }

    }//FIM DO WHILE.

}//FIM DO MENU.