#include <stdio.h>
// esse sistema faz a soma, subtração, multiplicação e divisão de dois numeros inteiros.

int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %.2f\n", (float)a / b);
    return 0;
}
// optei por fazer o exercicio 1 e 2 juntos.
