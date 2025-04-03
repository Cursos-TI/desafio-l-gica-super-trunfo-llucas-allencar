
#include <stdio.h>
#include <string.h>

//Defibicao da estrutura da carta
typedef struct supertrumfo {
 char estado [2];
 char codigo [50];
 char nomedaCidade;
 int populacao;
 float area;
 float pib;
 int numPontosTuristicos;
 float densidadePopulacional;
 float pibPerCapita;
} Carta;


// Função para calcular densidade populacional e PIB per capita
void calcularDadosAdicionais(Carta *carta) {
carta->densidadePopulacional = (float)carta->populacao / carta->area;
carta->pibPerCapita = carta->pib / carta->populacao;
}

int main () {
//Definição das cartas 
Carta carta1, carta2;

//Dados da Carta 1 (Maranhao);

strcpy(carta1.estado, "MA");
strcpy(carta1.codigo, "MA001");
strcpy(carta1.nomedaCidade, "Imperatriz");
carta1.populacao = 273110;
carta1.area = 1369039;
carta1.pib = 29592;
carta1.numPontosTuristicos = 15;

//Dados da Carta 2 (Acre)

strcpy(carta2.estado, "AC");
strcpy(carta2.codigo, "AC0001");
strcpy(carta2.nomedaCidade, "Brasileia");
carta2.populacao = 26000;
carta2.area = 3916;
carta2.pib = 68598;
carta2.numPontosTuristicos = 7;

//Cálculo dos dados adicionais 
calcularDadosAdicionais(&carta1);
calcularDadosAdicionais(&carta2);

// Atributos de comparação escolhido Pib

printf("Comparacao de cartas (Atributo: Pib): \n\n");
printf("carta 1 - %s (%s): %d\n", carta1.populacao, carta1.area, carta1.pib);
printf("carta 2 - %s (%s): %d\n", carta2.populacao, carta2.area, carta2.pib);

// logica de comparação 
if (carta1.populacao > carta2.populacao){
   printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nomedaCidade);
}else {
   printf("\nResultado: Carta 2 (%s) venceu !/n", carta2.nomedaCidade);
}
return 0 ;




}
