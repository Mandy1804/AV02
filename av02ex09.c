//09


#include <stdio.h>

float calcularMedia(float n1, float n2){
    return (n1 + n2)/2;
    
    
} 


int main(){
    
float media1, media2, media3, media4, media5;    
float nota1,nota2; 
int x;
  
  
    for(x = 1; x < 6; x++){
        printf("Informe as notas inteira do aluno %d:\n", x);
            printf("Informe a nota inteira obtida na 1° prova:");
            scanf("%f", &nota1);
        printf("Informe a nota inteira obtida na 2° prova:");
        scanf("%f", &nota2);
            
                     calcularMedia(nota1, nota2);  
                    
             if(x == 1) { 
                media1 = calcularMedia(nota1, nota2);
            }if(x == 2) {            
                media2 = calcularMedia(nota1, nota2);
            }if(x == 3) { 
                media3 = calcularMedia(nota1, nota2);
            }if(x == 4){ 
                media4 = calcularMedia(nota1, nota2);
                
            }else if( x == 5) 
                media5 = calcularMedia(nota1, nota2);
    }
           
        if (media1 >= 70){
            printf("Aluno 1: Nota: %.2f: Status: Aprovado.\n", media1);
        }else if(media1 >= 50 && media1 <= 69) {
            printf("Aluno 1: Nota: %.2f: Status: Recuperacao.\n", media1);
        }else {
            printf("Aluno 1: Nota: %.2f: Status: Reprovado.\n", media1);
        }    
            
        if (media2 >= 70){
            printf("Aluno 2: Nota: %.2f: Status: Aprovado.\n", media2);
        }else if(media2 >= 50 && media2 <= 69) {
            printf("Aluno 2: Nota: %.2f: Status: Recuperacao.\n", media2);
        }else {
            printf("Aluno 2: Nota: %.2f: Status: Reprovado.\n", media2);
        }

        if (media3 >= 70){
            printf("Aluno 3: Nota: %.2f: Status: Aprovado.\n", media3);
        }else if(media3 >= 50 && media3 <= 69) {
            printf("Aluno 3: Nota: %.2f: Status: Recuperacao.\n", media3);
        }else {
            printf("Aluno 3: Nota: %.2f: Status: Reprovado.\n", media3);
        }
        
        if (media4 >= 70){
            printf("Aluno 4: Nota: %.2f: Status: Aprovado.\n", media4);
        }else if(media4 >= 50 && media4 <= 69) {
            printf("Aluno 4: Nota: %.2f: Status: Recuperacao.\n", media4);
        }else{
            printf("Aluno 4: Nota: %.2f: Status: Reprovado.\n", media4);
        }
        
        if (media5 >= 70){
            printf("Aluno 5: Nota: %.2f: Status: Aprovado.\n", media5);
        }else if(media5 >= 50 && media5 <= 69) {
            printf("Aluno 5: Nota: %.2f: Status: Recuperacao.\n", media5);
        }else {
            printf("Aluno 5: Nota: %.2f: Status: Reprovado.\n", media5);
        }
        



    
}