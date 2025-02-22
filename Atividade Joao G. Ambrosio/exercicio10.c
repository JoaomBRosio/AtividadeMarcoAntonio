#include <stdio.h>
// esse sistema pede 5 numeros inteiros e mostra o maior deles e a soma deles.

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
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Numeros digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nO maior numeros e: %d\n", maior(nums, 5));
    printf("A soma dos numeros e: %d\n", soma(nums, 5));
    return 0;
}
