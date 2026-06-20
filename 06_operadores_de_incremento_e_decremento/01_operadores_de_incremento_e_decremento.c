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
    int numero1 = 1;

    //numero1++; é o mesmo que numero1 = numero1 + 1;
    //numero1 += 1; é outra forma de escrever numero1 = numero1 + 1;
    printf("Antes incremento: %d\n", numero1); // Imprime 1
    numero1++; // numero1 agora é 2
    printf("Apos incremento: %d\n", numero1); // Imprime 2

    //numero1--; é o mesmo que numero1 = numero1 - 1;
    //numero1 -= 1; é outra forma de escrever numero1 = numero1 - 1;
    printf("Antes decremento: %d\n", numero1); // Imprime 2
    numero1--; // numero1 agora é 1
    printf("Apos decremento: %d\n", numero1); // Imprime 1
return 0;
}