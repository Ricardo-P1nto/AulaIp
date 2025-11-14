#include <stdio.h>

int main(){
    float grausC, grausF;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grausC);

    grausF = (grausC * 1,8) + 32.0;

    printf("A temperatura em graus Fahrenheit é %.2f\n", grausF);
}