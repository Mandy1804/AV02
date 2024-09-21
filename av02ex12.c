//12
#include <stdio.h>

int main() {
    int numeros[6];
    int i;

    // 'FOR' PARA SOLICITAR 6 NUMEROS INTEIROS
    for (i = 0; i < 6; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

  
    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) { // % TRAS O RESTO 0 SENDO PAR
            printf("O numero %d e par", numeros[i]);

          
            if (numeros[i] > 10) { // NUMERO MAIOR QUE 10
                printf(" e maior que 10.\n");
            } else {
                printf(" e menor ou igual a 10.\n");
            }

        } else { 
            printf("O numeor %d e impar", numeros[i]);

            
            if (numeros[i] < 50) { // menor que 50
                printf(" e menor que 50.\n");
            } else {
                printf(" e maior ou igual a 50.\n");
            }
        }
    }

    return 0;
}