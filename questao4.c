#include <stdio.h>

/*
Data: 11/04/2022
Nome: Guilherme da Silva Navarro
Vaga de Estágio BNE

Construa um algoritmo que recebe do usuário 5 números. Após recebê-los, retorne a lista de números em ordem decrescente.
*/

int main(void) {
  int i, array[5], aux, x, y;

  printf("Construa um algoritmo que recebe do usuário 5 números. Após recebê-los, retorne a lista de números em ordem decrescente.\n\n");
  
  for(i = 0; i < 5; i++){
    printf("Digite o %dº número:", i+1);
    scanf("%d", &array[i]);
  }

  for(x = 0; x < 5; x++){
    for(y = 0; y < 5; y++){
      if(array[x] > array[y]){
        aux = array[x];
        array[x] = array[y];
        array[y] = aux;       
      }      
    }
  }

  system("clear");

  printf("OS NÚMEROS EM ORDEM DECRESCENTE:\n");
  for(i = 0; i < 5; i++){
    printf("%d\t", array[i]);
  }
  
  return 0;
}