#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    while (i <= num) {
        if (i % 2 != 0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}
