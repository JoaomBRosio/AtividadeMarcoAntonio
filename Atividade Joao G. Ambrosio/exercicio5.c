#include <stdio.h>
// esse sistema mostra os numeros impares ate um numero inteiro positivo.

int main() {
    int num, i = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    while (i <= num) {
        if (i % 2 != 0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}
