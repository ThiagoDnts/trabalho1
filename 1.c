#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

  
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    
    if (x * x - 16 > 0) {
   
        resultado = (5 * x + 3) / sqrt(x * x - 16);
      
        printf("O valor de f(%.2lf) é %.2lf\n", x, resultado);
    } else {
        printf("A função não está definida para este valor de x.\n");
    }

    return 0;
}
