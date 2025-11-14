#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("Os números são iguais.\n");
    } else {
        printf("Os números são diferentes.\n");
    }
}