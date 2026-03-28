#include <stdio.h>

int main() {
    int idade, maticula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite a sua matrícula: \n");
    scanf("%d", &maticula);

    printf("Nome do aluno: %s - Matrícula: %d\n", nome, maticula);
    printf("Idade: %d - Altura: %.2f", idade, altura);

    return 0;
}
