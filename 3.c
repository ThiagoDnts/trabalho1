#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);


    if (A + B > C && A + C > B && B + C > A) {
     
        if (A == B && B == C) {
            printf("É um triângulo equilátero.\n");
        } else if (A == B || A == C || B == C) {
            printf("É um triângulo isósceles.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }

    return 0;
}
