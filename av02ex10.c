//10
#include <stdio.h>

void calcularIdade(int idade){
    
    if(idade <= 12 || idade == 0)
        printf("IDADE: %d CATEGORIA: Crianca.\n", idade);
    else if(idade >= 13 && idade <= 17 )
        printf("IDADE: %d CATEGORIA: Adolescente.\n", idade);
    else if(idade >= 18 && idade <= 64 )
        printf("IDADE: %d CATEGORIA: Adulto.\n", idade);
    else
        printf("IDADE: %d CATEGORIA: Idoso (a).\n", idade);
    
} 
int main(){
    
int idade;
int x;
  
  
    for(x = 1; x < 11; x++){
        printf("Informe a idade da pessoa %dÂ°: ", x);
            scanf("%d", &idade);
                
                calcularIdade(idade);
    }        
    
    
}