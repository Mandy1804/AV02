//08
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite;
    int tentativas = 7;
    int tentativaAtual = 0;
    int acertou = 0;

    // Inicializa o gerador de numero aleatorios
    srand(time(NULL));
    
    // Sorteia um numero entre 1 e 100
    numeroSorteado = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhacao!\n");
    printf("Tente adivinhar o numero entre 1 e 100.\n");

    // Loop para permitir ate 7 tentativas
    while (tentativaAtual < tentativas) {
        printf("Tentativa %d de %d: ", tentativaAtual + 1, tentativas);
        scanf("%d", &palpite);

        // Verifica se o palpite e valido
        if (palpite < 1 || palpite > 100) {
            printf("Por favor, insira um numero entre 1 e 100.\n");
            continue;
        }

        // Verifica o palpite
        if (palpite == numeroSorteado) {
            acertou = 1;
            break;
        } else if (palpite < numeroSorteado) {
            printf("O numero sorteado e maior que %d.\n", palpite);
        } else {
            printf("O numero sorteado e menor que %d.\n", palpite);
        }

        tentativaAtual++;
    }

    // Resultado final
    if (acertou) {
        printf("Parabens! Voce acertou o numero %d.\n", numeroSorteado);
    } else {
        printf("Voce esgotou todas as suas tentativas. O numero sorteado era %d.\n", numeroSorteado);
    }

    return 0;
}
