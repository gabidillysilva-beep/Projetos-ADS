#include <stdio.h>
int main() {
    int idade = 25; // Variável do tipo inteiro
    int quantidade = 1;
    float altura = 1.75; // Variável do tipo ponto flutuante
    char letra = 'A'; // Variável do tipo caractere
    char nome[20] = "Gabriela"; // Variável do tipo string (array de caracteres)

    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}