#include <stdio.h>

int main() {
    int num;
    do {
        printf("Digite um número inteiro positivo (ou um número negativo para sair): ");
        scanf("%d", &num);
        if (num >= 0)
            printf("Você digitou: %d\n", num);
    } while (num >= 0);
    return 0;
}
