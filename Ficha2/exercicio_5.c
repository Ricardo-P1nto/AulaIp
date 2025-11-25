#include <stdio.h>
#include <math.h> // Para usar a constante M_PI (pi)

int main() {
    double raio;
    double perimetro;

    // 5. Escreva um programa que calcule o perímetro de uma circunferência.
    // A fórmula matemática é a seguinte: 2 * π * Raio.

    printf("Digite o valor do raio da circunferência: ");
    if (scanf("%lf", &raio) != 1) {
        printf("Erro na leitura do raio.\n");
        return 1;
    }

    // A constante M_PI é definida em <math.h>
    // Se M_PI não estiver disponível, pode-se usar 3.14159265358979323846
    perimetro = 2 * M_PI * raio;

    printf("O perímetro da circunferência com raio %.2f é: %.2f\n", raio, perimetro);

    return 0;
}
