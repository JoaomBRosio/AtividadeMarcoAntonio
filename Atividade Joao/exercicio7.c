#include <stdio.h>

int main() {
    int nums[5], pares = 0, impares = 0;
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0)
            pares++;
        else
            impares++;
    }
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    return 0;
}
