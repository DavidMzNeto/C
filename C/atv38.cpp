#include <stdio.h>

int main(){
	
	int num, qntpar=0;
	
	while (num!=0)
	{
		printf("Digite um numero diferente de 0 ou 0 para finalizar \n");
		scanf("%i", &num);
		
		if (num!=0){
		
			if (num%2==0)
			{
				printf("O numero digitado eh par \n");
				qntpar++;
			}
			else {
				printf("O numero digitado eh impar \n");
			}
		}
	}
	
	printf("A quantidade de numeros pares eh %i \n", qntpar);
	
}
