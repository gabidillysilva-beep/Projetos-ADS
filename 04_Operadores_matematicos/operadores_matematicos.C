#include <stdio.h>

int main() {
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */ 

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero1: \n");
    scanf("%d", &numero1);
    
    printf("Entre com o numero2: \n");
    scanf("%d", &numero2);

    // operaçao soma 
    soma = numero1 + numero2;

    // operaçao subtração
    subtracao = numero1 - numero2;

    // operaçao multiplicação
    multiplicacao = numero1 * numero2;

    // operaçao divisão
    divisao = numero1 / numero2;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

}