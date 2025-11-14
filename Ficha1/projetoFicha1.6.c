#include <stdio.h>

int main(){
    int baseValor, alturaValor, areaValor;

    printf("Digite a base do retângulo: ");
    scanf("%d", &baseValor);

    printf("Digite a altura do retângulo: ");
    scanf("%d", &alturaValor);

    areaValor = (baseValor * alturaValor)/2;
    printf("A área do retângulo é %d\n", areaValor);
}