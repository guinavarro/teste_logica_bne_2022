#include <stdio.h>

/*
Data: 11/04/2022
Nome: Guilherme da Silva Navarro
Vaga de Estágio BNE

Construa um algoritmo que instancia um array de inteiros com os seguintes valores: 1,3,35,40,85,123,121,209,200,305,350. Após, crie uma lógica que separe estes números entre pares e ímpares em outros 2 arrays.

*/


int main(void) {

  printf("Construa um algoritmo que instancia um array de inteiros com os seguintes valores: 1,3,35,40,85,123,121,209,200,305,350. Após, crie uma lógica que separe estes números entre pares e ímpares em outros 2 arrays.\n\n");
  
  int i, array[11] = {1,3,35,40,85,123,121,209,200,305,350};
  int par[11], impar[11];

  printf("Números pares do Array\n");
  
  for(i = 0; i < 11; i++){
    if(array[i] % 2 == 0){
      par[i] = array[i];
      printf("%d\t", par[i]);
    }
  }
  
  printf("\nNúmeros ímpares do Array\n");

   for(i = 0; i < 11; i++){
    if(array[i] % 2 != 0){
      impar[i] = array[i];
      printf("%d\t", impar[i]);
    }
  }
  
  return 0;
}