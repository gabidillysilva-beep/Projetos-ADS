#include <stdio.h>

  int main() { 
 // Operadores de atribuição
  /*
  Atribuição simples (=)
  Atribuição com soma (+=)
  Atribuição com subtração (-=)
  Atribuição com multiplicação (*=)
  Atribuição com divisão (/=)
  */

  int numero1 = 10, numero2, resultado;

  resultado = 10; // Atribuição simples
  printf("Resultado: %d\n", resultado);

  // resultado = resultado + 20;
  resultado += 20; // Atribuição com soma
  printf("Resultado: %d\n", resultado);

  // resultado = resultado - numero1;
  resultado -= numero1; // Atribuição com subtração
  printf("Resultado: %d\n", resultado);

  // resultado = resultado * 5;
  resultado *= 5; // Atribuição com multiplicação
  printf("Resultado: %d\n", resultado);

  // resultado = resultado / 2;
  resultado /= 2; // Atribuição com divisão
  printf("Resultado: %d\n", resultado);

  return 0;
}