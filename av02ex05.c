//05
#include <stdio.h>

int main() {
    int numeros[10]; // Array para armazenar os 10 numero
    int pares = 0;   // Contador para numero  pares
    int impares = 0; // Contador para numero impares

    // Solicita ao usuario para inserir 10 numero inteiros
    printf("Digite 10 numero inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        // Verifica se o numero e par ou impar
        if (numeros[i] % 2 == 0) {
            pares++; // Incrementa o contador de pares
        } else {
            impares++; // Incrementa o contador de immpares
        }
    }

    // Exibe a quantidade de numero pares e impare
    printf("Quantidade de numero pares: %d\n", pares);
    printf("Quantidade de numero impar: %d\n", impares);

    return 0;
}
