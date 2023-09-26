#include <stdio.h>

int main() {
    double salario, totalSalario = 0.0;
    int numFilhos, totalFilhos = 0;
    int numPessoas = 0;
    int numPessoasAte100 = 0;
    double maiorSalario = -1.0; 

    do {
      
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0) {
        
            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);

            totalSalario += salario;
            totalFilhos += numFilhos;
            numPessoas++;

            if (salario <= 100.0) {
                numPessoasAte100++;
            }

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }
        }
    } while (salario >= 0);

    if (numPessoas > 0) {
 
        double mediaSalario = totalSalario / numPessoas;
        double mediaFilhos = (double)totalFilhos / numPessoas;

       
        double percentualAte100 = (double)numPessoasAte100 / numPessoas * 100.0;

       
        printf("Média do salário da população: %.2lf\n", mediaSalario);
        printf("Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("Maior salário: %.2lf\n", maiorSalario);
        printf("Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
