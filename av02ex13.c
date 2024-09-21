//13
#include <stdio.h>

int main() {
    int opcao;
    float temperatura, convertida;

    do { 
        printf("\nMenu:\n");
        printf("1. Converter de Celsius para Fahrenheit\n");
        printf("2. Converter de Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    
        switch (opcao) { // processar a escolha do usuario
            case 1:
                // conversao - Celsius > Fahrenheit
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                convertida = (temperatura * 9 / 5) + 32; // formula - google
                printf("A temperatura em Fahrenheit: %.2f\n", convertida);
                break;

            case 2:
                // conversao - Fahrenheit > Celsius
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                convertida = (temperatura - 32) * 5 / 9; // formula - google
                printf("A temperatura em Celsius: %.2f\n", convertida);
                break;

            case 3:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3); 
    return 0;
}