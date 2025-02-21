#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    printf("Divisão: %.2f\n", (float)a / b);
    return 0;
}
