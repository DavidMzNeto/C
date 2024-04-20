#include <stdio.h>

int main (){
   
    float cnt, num, soma, media, dobro;
    cnt = 1;
	soma = 0;
	
    while (cnt <= 5)
    {
        printf("Digite um numero \n");
        scanf("%f", &num);
        soma += num;
        printf("o dobro de %.2f eh %.2f: \n", num, num*2);
        cnt ++;
        
    }
    
	media = soma / 5;
	printf("O resultado da soma de todos os numeros apresentados eh: %.2f \n", soma);
	printf("O resultado da media dos numeros apresentados eh: %.2f", media);
	
}
