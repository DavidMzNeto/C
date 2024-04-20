#include <stdio.h>

int main (){
	
	int cnt, num, soma=0;
	
	while (cnt < 10)
	{
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(num < 40)
		{
			soma = soma + num;
			printf("Soma com o numero anterior: %i \n", soma);
		}
		
		cnt ++;
	}
	
	printf("A soma dos numeros inferiores a 40 eh: %i \n", soma);
}
