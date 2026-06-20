#include <stdio.h>
int main() {
    /*
    Incremento(++)
    Pré-incremento: ++variável (incrementa a variável antes de usá-la)
    Pós-incremento: variável++ (usa a variável e depois a incrementa)
    Decremento(--)
    Pré-decremento: --variável (decrementa a variável antes de usá-la)
    Pós-decremento: variável-- (usa a variável e depois a decrementa)
    */
    int numero1 = 1, resultado;

    printf("Antes incremento: %d\n", numero1);
    //numero1++; é o mesmo que numero1 = numero1 + 1;
    //numero1 += 1; é outra forma de escrever numero1 = numero1 + 1;
    //Pós-incremento:
    //resultado = numero1; // resultado recebe 1
    //numero1++; // numero1 agora é 2
    resultado = numero1++; // numero1 agora é 2 
    //printf("Apos incremento: %d\n", numero1);
    printf("Apos Pós-incremento: %d - resultado: %d\n", numero1, resultado); // Imprime numero1 = 2 e resultado = 1

    resultado = ++numero1; // numero1 agora é 3
    //printf("Apos incremento: %d\n", numero1); // Imprime 3
    printf("Apos Pré-incremento: %d - resultado: %d\n", numero1, resultado); // Imprime numero1 = 3 e resultado = 3

    //numero1--; é o mesmo que numero1 = numero1 - 1;
    //numero1 -= 1; é outra forma de escrever numero1 = numero1 - 1;
    //Pós-decremento:
    //resultado = numero1; // resultado recebe 3
    //numero1--; // numero1 agora é 2
    resultado = numero1--; // numero1 agora é 2
    printf("Apos Pós-decremento: %d - resultado: %d\n", numero1, resultado); // Imprime numero1 = 1 e resultado = 3

    resultado = --numero1; // numero1 agora é 1
    printf("Apos Pré-decremento: %d - resultado: %d\n", numero1, resultado); // Imprime numero1 = 1 e resultado = 1
    
    return 0;
}