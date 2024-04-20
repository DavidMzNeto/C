#include <stdio.h>

int main(){
	
	int cnt, num, numpar=0, numimpar;
	
	while(cnt < 10)
	{
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(num % 2 == 0 && num != 0)
		{
			numpar++;
		}
		else if(num % 2 != 0)
		{
			numimpar++;
		}
		cnt++;
	}
	
	printf("%i numeros sao pares \n", numpar);
	printf("%i numeros sao impares \n", numimpar);
}
