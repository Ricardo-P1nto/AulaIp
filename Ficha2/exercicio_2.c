#include <stdio.h>

int main() {
    int valor;

    // 2. Escreva um programa que peça ao utilizador para digitar um valor inteiro e que,
    // seguidamente, diga no ecrã se é par ou ímpar.

    printf("Digite um valor inteiro: ");
    if (scanf("%d", &valor) != 1) {
        printf("Erro na leitura do valor.\n");
        return 1;
    }

    if (valor % 2 == 0) {
        printf("O valor %d é par.\n", valor);
    } else {
        printf("O valor %d é ímpar.\n", valor);
    }

    return 0;
}
