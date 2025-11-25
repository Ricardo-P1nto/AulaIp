#include <stdio.h>

int main() {
    int mes;

    // 6. Escreva um programa que peça para o utilizador digitar um número inteiro
    // correspondente a um mês do ano (1 para janeiro, 2 para fevereiro e assim
    // sucessivamente) e que em resposta apresente no ecrã o nome desse mês por extenso
    // (por exemplo, digitando 12, a resposta deverá ser dezembro). Utilize a estrutura if. Se
    // for digitado um valor fora do intervalo de 1 a 12, então o programa deve indicar que se
    // trata de um mês inexistente.

    printf("Digite um número inteiro correspondente a um mês (1-12): ");
    if (scanf("%d", &mes) != 1) {
        printf("Erro na leitura do mês.\n");
        return 1;
    }

    if (mes == 1) {
        printf("Janeiro\n");
    } else if (mes == 2) {
        printf("Fevereiro\n");
    } else if (mes == 3) {
        printf("Março\n");
    } else if (mes == 4) {
        printf("Abril\n");
    } else if (mes == 5) {
        printf("Maio\n");
    } else if (mes == 6) {
        printf("Junho\n");
    } else if (mes == 7) {
        printf("Julho\n");
    } else if (mes == 8) {
        printf("Agosto\n");
    } else if (mes == 9) {
        printf("Setembro\n");
    } else if (mes == 10) {
        printf("Outubro\n");
    } else if (mes == 11) {
        printf("Novembro\n");
    } else if (mes == 12) {
        printf("Dezembro\n");
    } else {
        printf("Mês inexistente. O valor deve estar entre 1 e 12.\n");
    }

    return 0;
}
