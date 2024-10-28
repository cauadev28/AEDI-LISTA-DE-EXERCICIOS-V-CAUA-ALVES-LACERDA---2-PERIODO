#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}

int main() {
    int n;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um número inteiro não negativo.\n");
    } else {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
    }

    return 0;
}
