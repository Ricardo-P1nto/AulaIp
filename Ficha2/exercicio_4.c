#include <stdio.h>

int main() {
    int valor;

    // 4. Escreva um programa que peça ao utilizador para digitar um valor inteiro positivo. Leia
    // esse valor. Se o valor digitado for 0 (zero) ou negativo envie uma mensagem para o ecrã
    // a informar tal facto e termine o programa. Se o valor digitado for efetivamente positivo,
    // conforme solicitado, então mostre no ecrã todos os dígitos que se encontram abaixo
    // desse número até zero, inclusive.

    printf("Digite um valor inteiro positivo: ");
    if (scanf("%d", &valor) != 1) {
        printf("Erro na leitura do valor.\n");
        return 1;
    }

    if (valor <= 0) {
        printf("Valor introduzido errado. Termina o Programa.\n");
        return 0;
    }

    // Se o valor for positivo, mostra todos os dígitos abaixo até zero, inclusive.
    // O exemplo mostra a contagem a partir de valor - 1.
    for (int i = valor - 1; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
