#include <stdio.h>
#include <stdlib.h>
int main (void)
{
  //declaração de variáveis do tipo inteiro
  int a, b, soma;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &a); //recebe um inteiro e armazena na variável a
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &b); //recebe um inteiro e armazena na variável b
  soma = a + b;
  //Efetua adição de a com b e armazena na variável soma
  
  printf("O valor da soma = %d\n", soma); //Mostra mensagem com o resultado
  
  system ("pause");
  return(0);
}
