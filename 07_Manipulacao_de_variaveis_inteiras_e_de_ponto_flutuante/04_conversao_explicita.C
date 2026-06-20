#include <stdio.h>
 
// Este programa demonstra a conversão explícita (casting) de um inteiro para um float
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}