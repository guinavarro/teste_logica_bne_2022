#include <stdio.h>

/*
Data: 11/04/2022
Nome: Guilherme da Silva Navarro
Vaga de Estágio BNE

Construa um algoritmo que calcula o tamanho de um edifício com base na altura de cada andar e o número de andares informados pelo usuário. 
*/

int main(void) {
  float altAndar, qtdAndares, altTotal;

  printf("Construa um algoritmo que calcula o tamanho de um edifício com base na altura de cada andar e o número de andares informados pelo usuário.\n\n");
  
  printf("\nDigite a altura do andar:");
  scanf("%f", &altAndar);

  printf("\nAgora digite a quantidade de andares que o prédio terá:");
  scanf("%f", &qtdAndares);

  system("clear");
    
  altTotal = qtdAndares * altAndar;

  printf("A altura total do prédio é de: %2.f m", altTotal);

  
  return 0;
}