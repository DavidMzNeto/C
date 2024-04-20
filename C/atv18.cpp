#include <stdio.h>

int main(){
    
    int num, num2, soma, mult;
    
    printf("Digite um numero \n");
    scanf("%i", &num);
    
    printf("Digite outro numero \n");
    scanf("%i", &num2);
    
    soma = num + num2;
    mult = num * num2;
    
    if (num == num2)
    {
        printf("%i", soma);
    }
    
    else
    {
        printf("%i", mult);
    }
    
}
