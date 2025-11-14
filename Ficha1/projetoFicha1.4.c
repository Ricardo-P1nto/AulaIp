#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(numero > 10){
        printf("O número %d é maior que 10.\n", numero);
    } else {
        printf("O número %d não é maior que 10.\n", numero);
    }

}