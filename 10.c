#include <stdio.h>
#include <string.h>

int main() {
    int codigo, num_veiculos, num_acidentes;
    char estado[3]; 
    char cidade_maior_acidente[50], cidade_menor_acidente[50];
    int maior_acidente = 0, menor_acidente = 0;
    int total_veiculos = 0, total_acidentes_rs = 0, num_cidades_rs = 0;

  
    strcpy(cidade_maior_acidente, "");
    strcpy(cidade_menor_acidente, "");


    for (int i = 1; i <= 200; i++) {
    
        printf("Cidade %d:\n", i);
        printf("Código da cidade: ");
        scanf("%d", &codigo);
        printf("Estado (sigla): ");
        scanf("%s", estado);
        printf("Número de veículos de passeio (em 1992): ");
        scanf("%d", &num_veiculos);
        printf("Número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &num_acidentes);

    
        total_veiculos += num_veiculos;


        if (strcmp(estado, "RS") == 0) {
            total_acidentes_rs += num_acidentes;
            num_cidades_rs++;
        }


        if (i == 1 || num_acidentes > maior_acidente) {
            maior_acidente = num_acidentes;
            strcpy(cidade_maior_acidente, estado);
        }
        if (i == 1 || num_acidentes < menor_acidente) {
            menor_acidente = num_acidentes;
            strcpy(cidade_menor_acidente, estado);
        }
    }


    double media_veiculos = (double)total_veiculos / 200;

  
    double media_acidentes_rs = (double)total_acidentes_rs / num_cidades_rs;

   
    printf("\nResultados:\n");
    printf("Maior índice de acidentes: %d na cidade de %s\n", maior_acidente, cidade_maior_acidente);
    printf("Menor índice de acidentes: %d na cidade de %s\n", menor_acidente, cidade_menor_acidente);
    printf("Média de veículos nas cidades brasileiras: %.2lf\n", media_veiculos);
    printf("Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2lf\n", media_acidentes_rs);

    return 0;
}
