#include <stdio.h>
// esse sistema pede 5 numeros inteiros e mostra a soma deles.

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
    printf("A soma dos numeros é: %d\n", soma(nums, 5));
    return 0;
}
