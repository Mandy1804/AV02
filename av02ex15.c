//15
#include <stdio.h>

int main() {
    int opcao;
    int numero, i;

    do {
        // Exibindo o menu de opcao
        printf("\nMenu:\n");
        printf("1. Gerar a tabuada de um numero\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        
        if (opcao == 1) {
            printf("Digite o numero para gerar a tabuada: ");
            scanf("%d", &numero);


            printf("Tabuada de %d:\n", numero); // gerar o  valor de 1 a 10
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else if (opcao == 2) {

            printf("Saindo do programa.\n");
        } else {

            printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 2); 
    return 0;
}