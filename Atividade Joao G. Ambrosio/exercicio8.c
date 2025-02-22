#include <stdio.h>
// esse sistema pede dois numeros inteiros e mostra o maior deles.

int maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("O maior numero e: %d\n", maior(num1, num2));
    return 0;
}
