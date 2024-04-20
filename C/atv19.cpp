#include <stdio.h>

int main(){
    
    int num, num2;
    
    printf("Digite um numero \n");
    scanf("%i", &num);
    
    printf("Digite outro numero \n");
    scanf("%i", &num2);
    
    if (num < num2)
    {
        printf("O numero %i e menor que ", num);
        printf("%i", num2);
    }
    
    else
    {
        printf("O numero %i e menor que ", num2);
        printf(" %i", num);
    }
    
}
