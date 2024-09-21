//02
#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Solicita um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Termina o programa se o número não for positivo
    }

    // Laço para somar os divisores próprios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) { // Verifica se i um divisor
            soma += i; // Soma o divisor
        }
    }

    // Verifica se a soma igual ao número
    if (soma == numero) {
        printf("%d e numero perfeito.\n", numero);
    } else {
        printf("%d nao e um numero perfeito.\n", numero);
    }

    return 0;
}
