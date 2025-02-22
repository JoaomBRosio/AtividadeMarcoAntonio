#include <stdio.h>
// esse sistema pede 5 numeros inteiros e mostra quantos sao pares e quantos sao impares.

int main() {
    int nums[5], pares = 0, impares = 0;
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    return 0;
}
