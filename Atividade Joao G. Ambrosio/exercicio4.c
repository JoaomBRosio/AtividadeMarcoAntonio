#include <stdio.h>
// esse sistema faz a tabuada de um numero inteiro positivo.

int main() {
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
