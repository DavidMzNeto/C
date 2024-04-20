#include <stdio.h>

int main(){
	
	int cnt, num, qntpar=0, qntimpar=0, somapar=0, somaimpar=0;
	
	while (cnt<5)
	{
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if (num==0)
		{
			printf("Numero nulo é invalido \n");
		}
		else if (num % 2 ==0)
		{
			somapar += num;
			qntpar++;
		}
		else
		{
			somaimpar+= num;
			qntimpar++;
		}
		
		cnt++;
	}
	
	printf("A quantidade de numeros pares eh %i e sua somatoria eh %i \n", qntpar, somapar);
	printf("A quantidade de numeros impares eh %i e sua somatoria eh %i \n", qntimpar, somaimpar);
}
