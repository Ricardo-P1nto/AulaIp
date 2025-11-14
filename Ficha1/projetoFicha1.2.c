#include <stdio.h>

int main(){
    int valor1, valor2, soma;

    printf("Digite um número: ");
    scanf("%d", &valor1);

    printf("Digite outro número: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    printf("A soma de %d e %d é %d\n", valor1, valor2, soma);
}