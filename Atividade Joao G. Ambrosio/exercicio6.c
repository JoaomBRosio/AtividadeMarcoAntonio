#include <stdio.h>
// esse sistema pede um numero inteiro positivo e mostra ele ate um numero negativo ser digitado.

int main() {
    int num;
    do {
        printf("Digite um numero inteiro positivo (ou um numero negativo para sair): ");
        scanf("%d", &num);
        if (num >= 0)
            printf("Voce digitou: %d\n", num);
    } while (num >= 0);
    return 0;
}
