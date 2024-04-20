#include <stdio.h>

int main(){
	
	int num, qntneg=0;
	
	while (num!=0)
	{
		printf("Digite um numero diferente de 0 ou 0 para finalizar \n");
		scanf("%i", &num);
		
		if (num!=0){
		
			if (num < 0)
			{
				printf("O numero digitado eh negativo \n");
				qntneg++;
			}
			else {
				printf("O numero digitado eh positivo \n");
			}
		}
	}
	
	printf("A quantidade de numeros negativos eh %i \n", qntneg);
	
}
