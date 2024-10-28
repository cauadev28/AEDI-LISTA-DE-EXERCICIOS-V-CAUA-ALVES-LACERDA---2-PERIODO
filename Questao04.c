#include <stdio.h>

int buscaBinaria(int arr[], int left, int right, int elemento) {
    if (right >= left) {
        int meio = left + (right - left) / 2;

        if (arr[meio] == elemento) {
            return meio;
        }

        if (arr[meio] > elemento) {
            return buscaBinaria(arr, left, meio - 1, elemento);
        }

        return buscaBinaria(arr, meio + 1, right, elemento);
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int elemento;

    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &elemento);

    int resultado = buscaBinaria(arr, 0, n - 1, elemento);

    if (resultado != -1) {
        printf("Elemento encontrado no índice: %d\n", resultado);
    } else {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}
