#include <stdio.h>

int main(){
	
	int cnt=0, num, numpos=0, numneg=0, somapos, somaneg;
	
	while(cnt<5)
	{
	printf("Digite um numero \n");
	scanf("%i", &num);
	
	if(num>0)
	{
		somapos+=num;
		numpos++;
		
	}
	else if (num<0)
	{
		somaneg+=num;
		numneg++;
	}
	else
	{
		printf("Numero nulo \n");
	}
	
	cnt++;
	}
	
	printf("Tem %i numeros positivos \n", numpos);
	printf("Tem %i numeros negativos \n", numneg);
	
	printf("A soma dos numeros positivos eh %i \n", somapos);
	printf("A soma dos numeros negativo eh %i \n", somaneg);
}
	
	
	
	
