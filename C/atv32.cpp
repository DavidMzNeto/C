#include <stdio.h>

int main(){
	
	int cnt=0, num, numpos=0, numneg=0;
	
	while(cnt<5)
	{
	printf("Digite um numero \n");
	scanf("%i", &num);
	
	if(num>0)
	{
		numpos++;
	}
	else if (num<0)
	{
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
}
	
	
	
	
