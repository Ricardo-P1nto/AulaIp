#include <stdio.h>

int main() {
    // 3. Faça um programa para converter para Fahrenheit as temperaturas de graus Celsius
    // compreendidas entre 10 e 20 graus, usando os valores do próprio contador do processo
    // repetitivo que vão de 10 a 20 contagens (10, 11, 12, ..., 18, 19, 20).
    // Nota: Use ciclos (as temperaturas a converter devem ser dadas pelo contador e não digitadas).

    int celsius;
    double fahrenheit;

    printf("Conversão de Celsius para Fahrenheit (10°C a 20°C):\n");
    printf("--------------------------------------------------\n");
    printf("Celsius (°C) | Fahrenheit (°F)\n");
    printf("--------------------------------------------------\n");

    // A fórmula é F = C * 9/5 + 32
    for (celsius = 10; celsius <= 20; celsius++) {
        fahrenheit = (double)celsius * 9.0 / 5.0 + 32.0;
        printf("%12d | %15.2f\n", celsius, fahrenheit);
    }

    printf("--------------------------------------------------\n");

    return 0;
}
