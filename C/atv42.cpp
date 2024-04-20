#include <stdio.h>

int main(){
	
	int num, somapos;
	
	while (num!=0)
	{
		printf("Digite um numero diferente de 0 ou 0 para finalizar \n");
		scanf("%i", &num);
		
		if (num!=0){
		
			if (num > 0)
			{
				printf("O numero digitado eh positivo \n");
				somapos=somapos+num;
			}
			else {
				printf("O numero digitado eh negativo \n");
			}
		}
	}
	
	printf("A soma de todos os numeros positivos eh %i \n", somapos);
	
}
