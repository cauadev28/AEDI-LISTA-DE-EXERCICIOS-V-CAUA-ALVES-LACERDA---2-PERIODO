#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0) {
        return a; 
    }
    return mcd(b, a % b); 
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Por favor, insira números inteiros positivos.\n");
    } else {
        int resultado = mcd(num1, num2);
        printf("O Mínimo Comum Divisor de %d e %d é: %d\n", num1, num2, resultado);
    }

    return 0;
}
