#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Data: 11/04/2022
Nome: Guilherme da Silva Navarro

Construa um algoritmo que identifique a quantidade de vogais a partir de um texto informado pelo usuário.
*/

int main(void) {

  printf("Construa um algoritmo que identifique a quantidade de vogais a partir de um texto informado pelo usuário.\n\n");
  
  char palavra[100];
  int i, tam, vogais = 0;

  printf("Digite uma palavra:");
  scanf("%s", &palavra);

  tam = strlen(palavra);

  for(i = 0; i <= tam; i++){
    switch(palavra[i]){
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':
        vogais++;
      break;
    }
  }

  printf("Total de vogais: %d", vogais);
  
  return 0;
}