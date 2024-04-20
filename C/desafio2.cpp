#include <stdio.h>

int main(){
    
    float salario, juros, credito;
    
    printf("Digite a quantia do seu salario \n");
    scanf("%f", &salario);
    
     if (salario <= 2000)
    {
    	credito = salario * 0.10;
        printf("o valor do credito disponivel eh %2.f \n", credito);
        juros = credito * 0.05;
        printf("o valor do juros aplicado eh %2.f \n", juros);
    }
    
    else if (salario >= 2000 && salario < 3000)
    {
        credito = salario * 0.15;
        printf("o valor do credito disponivel eh %2.f \n", credito);
        juros = credito * 0.10;
        printf("o valor do juros aplicado eh %2.f \n", juros);
    }
    
    else if (salario >= 3000 && salario < 4000)
    {
        credito = salario * 0.20;
        printf("o valor do credito disponivel eh %2.f \n", credito);
        juros = credito * 0.15;
        printf("o valor do juros aplicado eh %2.f \n", juros);
    }
    
    else if (salario >= 4000)
    {
        credito = salario * 0.25;
        printf("o valor do credito disponivel eh %2.f \n", credito);
        juros = credito * 0.20;
        printf("o valor do juros aplicado eh %2.f \n", juros);
    }
    
    
   
    
}
