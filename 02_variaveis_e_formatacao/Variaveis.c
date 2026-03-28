#include <stdio.h>
int main() {
    int idade = 25;
     // Variável do tipo inteiro
    int quantidade = 10;
    // Variável do tipo inteiro
    float altura = 1.75; 
    // Variável do tipo ponto flutuante
    double salario = 2.500; 
    // Variável do tipo ponto flutuante de dupla precisão
    char letra = 'A'; 
    // Variável do tipo caractere
    char nome[20] = "Gabriela"; 
    // Variável do tipo string (array de caracteres)
    int _teste = 10; 
    // Variável com nome começando com underscore  
    int teste2 = 20; 
    // Variável com nome começando com letra 

    //printf (imprime os valores das variáveis)

    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Salário: %.3f\n", salario);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    printf("Teste 1: %d\n", _teste);
    printf("Teste 2: %d\n", teste2);

    // A variável "1teste" é inválida porque começa com um número, o que não é permitido em C.
    // int 1teste = 30; // Esta linha causaria um erro de compilação
    // A variável "teste-2" é inválida porque contém um hífen, o que não é permitido em C.
    // int teste-2 = 40; // Esta linha causaria um erro de compil
    // A variável "teste_2" é válida porque contém apenas letras, números e underscores.
    // int teste_2 = 50; // Esta linha é válida
     
    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    %d; Iprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um caractere.
    %s: Imprime uma (string) de caracteres.
    */
   
    return 0;
}