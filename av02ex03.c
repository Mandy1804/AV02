//03
#include <stdio.h>

int main()
{
   float nota;
    int peso;
    int ponderada;
    int somaPeso;
    int mediatotal;
    
    for(int i = 0; i <=4; i++){
        printf("Insira a nota do aluno:");
        scanf("%f",&nota);
     printf("Insira o peso da prova:");
     scanf("%d",&peso);
        
    }  
    for(int i = 0; i <=4;i++){
       ponderada = nota * peso;
       somaPeso = peso;
    }
    
    mediatotal = ponderada / somaPeso;
    printf("A media da sala foi %d",mediatotal);

    return 0;
}
