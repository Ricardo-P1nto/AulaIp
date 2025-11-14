#include <stdio.h>

int main(void) {
    double a, b, media;


    printf("Digite o primeiro número real: ");
    if (scanf("%lf", &a) != 1) return 1;

    printf("Digite o segundo número real: ");
    if (scanf("%lf", &b) != 1) return 1;

    media = (a + b) / 2.0;

    printf("Média = %.6f\n", media);

    return 0;
}