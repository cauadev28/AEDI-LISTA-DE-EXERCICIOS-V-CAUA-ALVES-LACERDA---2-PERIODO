#include <stdio.h>

int somaRecursiva(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n + somaRecursiva(n - 1); 
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        int resultado = somaRecursiva(numero);
        printf("A soma de todos os números de 1 até %d é: %d\n", numero, resultado);
    }

    return 0;
}
