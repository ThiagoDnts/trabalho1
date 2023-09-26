#include <stdio.h>

int main() {

    double alturaChico = 1.50;
    double alturaZe = 1.10;

    
    double crescimentoChico = 0.02; 
    double crescimentoZe = 0.03;  

    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += crescimentoChico;
        alturaZe += crescimentoZe;
        anos++;
    }

    printf("Serão necessários %d anos para que Zé seja mais alto que Chico.\n", anos);

    return 0;
}
