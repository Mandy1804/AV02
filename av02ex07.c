//07
#include <stdio.h>

int main() {
    float notas[5]; // Array para armazenar as notas dos alunos
    float media;    // Variavel para armazenar a media
    char status[5][10]; // Array para armazenar o status (aprovado/reprovado)

    // Solicita as notas dos alunos
    for (int i = 0; i < 5.0; i++) {
        printf("Digite a nota do aluno com decimais %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula a media e determina o status
    for (int i = 0; i < 5; i++) {
        // Calcula a media (supondo que cada aluno tenha uma unica nota)
        media = notas[i];

        // Verifica se o aluno foi aprovado ou reprovado
        if (media >= 7.0) {
            snprintf(status[i], sizeof(status[i]), "Aprovado");
        } else {
            snprintf(status[i], sizeof(status[i]), "Reprovado");
        }

        // Exibe a media e o status do aluno
        printf("Aluno %d - Media: %.2f - Status: %s\n", i + 1, media, status[i]);
    }

    return 0;
}