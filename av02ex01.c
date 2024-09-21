//01
#include <stdio.h>

int main() {
    double capital, taxa, montante;
    int tempo, ano;

    // Solicita ao usario as entradas
    printf("Digite o valor inicial do investimento: ");
    scanf("%lf", &capital);
    
    printf("Digite a taxa de juros anual (em porcentagem): ");
    scanf("%lf", &taxa);
    
    printf("Digite o numero de anos que o dinheiro sera investido: ");
    scanf("%d", &tempo);

    taxa = taxa / 100;
    
    printf("\nAno\tValor Acumulado\n");
    printf("----------------------\n");

    montante = capital;

    for (ano = 1; ano <= tempo; ano++) {
        montante = montante * (1 + taxa); 
        printf("%d\t%.2f\n", ano, montante);
    }

    return 0;
}
