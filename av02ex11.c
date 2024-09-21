//11
#include <stdio.h>

void calcularNota(float n){
    
    if(n >= 9.00 && n <= 10.00)
        printf("NOTA INTEIRA DO ALUNO: %.2f TIPO DE NOTA: A.\n", n);
    else if(n >= 7.00 && n <= 8.9)
        printf("NOTA INTEIRA DO ALUNO: %.2f TIPO DE NOTA: B.\n", n);
    else if(n >= 5.00 && n <= 6.9)
        printf("NOTA INTEIRA DO ALUNO: %.2f TIPO DE NOTA: C.\n", n);
    else if(n >= 3.00 && n <= 4.9)   
        printf("NOTA INTEIRA DO ALUNO: %.2f TIPO DE NOTA: D.\n", n);
        
    else
        printf("NOTA DO INTEIRA ALUNO: %.2f TIPO DE NOTA: F.\n", n);   
        
        
} 
int main(){
    
float nota;
int x;
  
    
    for(x = 1; x < 9; x++){
        printf("Informe a nota inteira do %dÂ° aluno: ", x);
            scanf("%f", &nota);
                
               calcularNota(nota);
    }        
            
    

}