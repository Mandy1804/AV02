//04
#include <stdio.h>

void converterParaBase(int numeroDecimal, int base) {
    // Array de caracteres para representar valores maiores que 9 (A-F)
    char caracteres[] = "0123456789ABCDEF";
    char resultado[64]; // Buffer para armazenar o resultado da conversÃ£o
    int indice = 0; // indice para o buffer

    // Tratamento para o caso de numero 0
    if (numeroDecimal == 0) {
        printf("0");
        return;
    }

    // Conversao
    while (numeroDecimal > 0) {
        int resto = numeroDecimal % base; // resto da divisÃ£o
        resultado[indice++] = caracteres[resto]; // Armazena o caractere correspondente
        numeroDecimal /= base; // Atualiza o numero decimal
    }

    // Imprime o resultado na ordem correta (reversa)
    for (int i = indice - 1; i >= 0; i--) {
        printf("%c", resultado[i]);
    }
}

int main() {
    int numeroDecimal;
    int base;

    // Solicita o numero decimal
    printf("Digite um numero decimal: ");
    scanf("%d", &numeroDecimal);

    // Solicita a base de conversao
    printf("Digite a base de conversao (entre 2 e 16): ");
    scanf("%d", &base);

    // Verifica se a base esra¡ dentro do intervalo permitido
    if (base < 2 || base > 16) {
        printf("Base invalida. Deve estar entre 2 e 16.\n");
        return 1; // Codigo de erro
    }

    // Chama a funcao de conversao
    printf("numero convertido: ");
    converterParaBase(numeroDecimal, base);
    printf("\n");

    return 0;
}
