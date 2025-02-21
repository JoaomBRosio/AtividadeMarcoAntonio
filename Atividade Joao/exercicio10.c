#include <stdio.h>

int maior(int arr[], int tamanho) {
    int maior = arr[0];
    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

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
    printf("Números digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nO maior número é: %d\n", maior(nums, 5));
    printf("A soma dos números é: %d\n", soma(nums, 5));
    return 0;
}
