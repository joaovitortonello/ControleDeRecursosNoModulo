//COMO TAD É O CÉREBRO DO CÓDIGO, PODEMOS INCLUIR A BIBLIOTECA DENTRO DELE PARA DISTRUIBUIR PARA O RESTO DO SISTEMA.
#include "Bibliotecas.h"

struct FILAENERGIA{

    //ID DO MODULO QUE ESTÁ EM EXECUÇÃO.
    int IdModulo = NULL;

    //REQUISIÇÃO PARA O MÓDULO.
    int RequisiçãoEnergia = NULL;

    //DEFININDO A PRÓXIMA ESTRUTURA.
    FILAENERGIA *ProxNo;

};

struct FILAAGUA{

    //ID DO MODULO QUE ESTÁ EM EXECUÇÃO.
    int IdModulo = NULL;

    //REQUISIÇÃO PARA O MÓDULO.
    int RequisiçãoAgua = NULL;

    //DEFININDO A PRÓXIMA ESTRUTURA.
    FILAAGUA *ProxNO;

};


struct FILAOXIGENIO {

    //ID DO MODULO QUE ESTÁ EM EXECUÇÃO.
    int Modulo = NULL;
    
    //REQUISIÇÃO PARA O MÓDULO.
    int RequisicaoOxigenio = NULL;

    //DEFININDO A PRÓXIMA ESTRUTURA.
    FILAOXIGENIO *ProxNo;

};

struct MODULO {
   
    //ID DO MÓDULO PARA ARMAZENAR OS RECURSOS.
    int IdModulo = NULL;

    //RECURSOS.
    int Oxigenio = NULL;
    int Agua = NULL;
    int Energia = NULL;

};

//AQUI TODAS AS FUNÇÕES PARA AGREGANDO O MÓDULO, UTILIZANDO PARÂMETRO POR REFERÊNCIA.
void EnqueueOxigenio(FILAOXIGENIO **Primeiro, FILAOXIGENIO **Ultimo);
void DequeueOxigenio(FILAOXIGENIO **Primeiro, FILAOXIGENIO **Ultimo, MODULO *Modulo , int qtde);
void MostrarOxigenio(FILAOXIGENIO **Primeiro, FILAOXIGENIO **Ultimo);
//--------------------------------------------------------------------
void EnqueueAgua(FILAAGUA **Primeiro, FILAAGUA **Ultimo);
void DequeueAgua(FILAAGUA **Primeiro, FILAAGUA **Ultimo, MODULO *Modulo, int qtde);
void MostrarAgua(FILAAGUA **Primeiro, FILAAGUA **Ultimo);
//--------------------------------------------------------------------
void EnqueueEnergia(FILAENERGIA **Primeiro, FILAENERGIA **Ultimo);
void DequeueEnergia(FILAENERGIA **Primeiro, FILAENERGIA **Ultimo, MODULO *Modulo, int qtde);
void MostrarEnergia(FILAENERGIA **Primeiro, FILAENERGIA **Ultimo);
//--------------------------------------------------------------------
void Menu();