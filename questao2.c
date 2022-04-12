#include <stdio.h>
/*
Data: 11/04/2022
Nome: Guilherme da Silva Navarro
Vaga Estágio BNE

Construa um algoritmo que receba do usuário 4 números. Imprima o maior, o menor e a média deles.
*/


int main(void) {
  float maior, menor, soma, num;
  int i;

  maior = 0;
  menor = 0;
  soma = 0;

  printf("Construa um algoritmo que receba do usuário 4 números. Imprima o maior, o menor e a média deles.\n\n");

  for(int i = 0; i < 4; i++){
    printf("Informe o valor do %d número:", i+1);
    scanf("%f", &num);

    if(num > maior){
      maior = num;
    }else{
      menor = num;
    }
    //if(num > maior) maior = num;
    //if(num < menor) menor = num;

    soma += num;  
  }

  printf("\nA média dos números é de: %2.f", soma/4);
  printf("\nO maior valor é: %2.f", maior);
  printf("\nMenor valor: %2.f", menor);  

  
  return 0;
}