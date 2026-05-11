#include "TadFila.h"

/*

Gerenciamento de Recursos em uma Estação Espacial
Descrição do Problema: Você foi contratado para desenvolver um sistema que
gerencie o uso de recursos em uma estação espacial autossustentável. Essa estação
utiliza FILAS DINÂMICAS para gerenciar a distribuição de recursos essenciais:
oxigênio, energia e água.

A estação funciona com regras específicas de distribuição que exigem um controle
rigoroso para evitar desperdícios e garantir a sobrevivência de todos os módulos
conectados.
Regras do Sistema:

2. Cada módulo da estação espacial pode solicitar recursos seguindo as restrições:
• Oxigênio: Deve ser entregue na ordem em que os pedidos foram realizados.
• Água: Cada pedido deve ser atendido somente se houver oxigênio disponível
na fila, mas a ordem de chegada deve ser mantida.

3. • Energia: Deve ser distribuída após oxigênio e água terem sido fornecidos ao
mesmo módulo, respeitando a ordem de chegada dos pedidos.
Cada pedido de recursos tem as seguintes informações:
• ID do módulo (inteiro único, ex.: 101).
• Tipo de recurso solicitado (oxigênio, água, energia).

4. • Quantidade solicitada (inteiro).
A estação opera com as seguintes restrições:
• Um módulo não pode receber água antes de receber oxigênio.
• Um módulo não pode receber energia antes de receber oxigênio e água.
• Quando um recurso é fornecido, ele é removido da fila.

5. O operador da estação pode:
• Adicionar novos pedidos de recursos na fila (oxigênio, água ou energia).
• Processar o próximo pedido na fila, verificando se pode ser atendido.
• Exibir a lista de todos os pedidos pendentes, organizados pela fila de recursos
(oxigênio, água e energia).

6. O desafio: Desenvolver uma lógica eficiente para gerenciar múltiplas filas
dinâmicas (uma para cada recurso), garantindo que as dependências entre recursos
sejam respeitadas.

Requisitos Técnicos:
1. Utilize três filas dinâmicas separadas: uma para oxigênio, outra para água e
outra para energia.
2. Garanta que as filas sejam manipuladas de forma independente, mas que as
regras de dependência entre os recursos sejam respeitadas.
3. Adicione validações para impedir que um pedido inválido seja processado (por
exemplo, fornecer água sem oxigênio ou energia sem os dois recursos anteriores).
4. Libere corretamente a memória dos pedidos removidos.
Exemplo de Execução:
Entrada de Dados (Pedidos):
1. 2. 3. 4. 5. Fila Inicial:
Módulo 101 solicita oxigênio: 50 unidades.
Módulo 102 solicita água: 30 unidades.
Módulo 101 solicita água: 20 unidades.
Módulo 103 solicita energia: 100 unidades.
Módulo 102 solicita oxigênio: 40 unidades.
• Fila de Oxigênio: [101: 50, 102: 40]
• Fila de Água: [102: 30, 101: 20]
• Fila de Energia: [103: 100]
Processamento:
1. oxigênio).
2. oxigênio.
3. O módulo 101 recebe 50 unidades de oxigênio (removido da fila de
O módulo 102 aguarda para receber água porque ainda não recebeu
O módulo 101 recebe 20 unidades de água (removido da fila de água).

4. O módulo 103 aguarda energia porque ainda não recebeu oxigênio e água.
Resultado Final:
• Fila de Oxigênio: [102: 40]
• Fila de Água: [102: 30]
• Fila de Energia: [103: 100]
Objetivo do Exercício:
• Implementar e gerenciar três filas dinâmicas interdependentes.
• Resolver dependências entre as filas usando lógica condicional.
• Garantir que o sistema seja eficiente e livre de vazamentos de memória.

*/

//AQUI A PARTE EXECUTÁVEL PELO COMPUTADOR, ELE INICIA O MAIN E LÊ O MENU(), E DENTRO DO MENU EXISTE VÁRIAS FUNÇÕES QUE 
//SÃO CHAMADOS E EXECUTAVEIS PELO SISTEMS.
int main () {

    Menu();

    //SE OCORRER TUDO CORRETO ELE RETORNA 0 PARA A CPU.
    return 0;

}