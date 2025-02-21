#include <stdio.h>

int soma(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int nums[5];
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }
    printf("A soma dos números é: %d\n", soma(nums, 5));
    return 0;
}
