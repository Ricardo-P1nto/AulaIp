#include <stdio.h>

int main() {
    int nota;

    // 1. Elabore um programa que peça ao utilizador para digitar uma nota de um teste entre 0
    // e 20 (tal corresponde a verificar, numa única condição, se a nota é maior ou igual a 0 e
    // se a nota é menor ou igual que 20). Caso a nota respeite o intervalo, escreva no ecrã “a
    // nota é válida”. Caso a condição seja falsa, escreva “a nota está errada, pois deve estar
    // entre 0 e 20”.

    printf("Digite uma nota de teste (entre 0 e 20): ");
    if (scanf("%d", &nota) != 1) {
        printf("Erro na leitura da nota.\n");
        return 1;
    }

    if (nota >= 0 && nota <= 20) {
        printf("A nota é válida.\n");
    } else {
        printf("A nota está errada, pois deve estar entre 0 e 20.\n");
    }

    return 0;
}
