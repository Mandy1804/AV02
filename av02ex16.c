//16
#include <stdio.h>

int main() {
    int opcao;
    int numero, i;
    unsigned long long fatorial; // calcular fatoriais de numeros maiores sem perder a precisao.

    do {
        printf("\nMenu:\n");
        printf("1. Calcular o fatorial de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um numero inteiro: ");
            scanf("%d", &numero);

            fatorial = 1;

            for (i = 1; i <= numero; i++) {
                fatorial *= i; // multiplica o numero para obter a fatorial
            }

            printf("O fatorial de %d e: %llu\n", numero, fatorial); // %llu para mostrar a unsigned long
        } else if (opcao == 2) {
            printf("Saindo do programa.\n");
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 2);

    return 0;
}