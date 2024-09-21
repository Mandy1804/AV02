//6. 
#include <stdio.h>

int Batata(int numero) { 

    if (numero < 2) return 0;           
    
    
    for (int i = 2; i <= numero; i++) {                     
        if (numero % i == 0) return 0;             
    return 1;                                
}

} int main() {
    int inicio, fim;

   
    printf("Informe o valor inicial: ");                                                  
        scanf("%d", &inicio);
    printf("Informe o valor final: ");
        scanf("%d", &fim);
    int Resultado = 0;                   

   
    for (int i = inicio; i <= fim; i++) { 
        if (Batata(i)) {                   
                                            
            
            printf("%d ", i);     
            Resultado = 1;     
        }
    }

    
    if (!Resultado) {   
        printf("Sem primos no intervalo informado.\n");
    }

    return 0; 
}
                    
