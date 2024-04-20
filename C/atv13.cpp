#include <stdio.h>

int main(){
	
	char nometimea, nometimeb; 
	int goltimea, goltimeb;
	
	printf("Digite o nome do Time A \n");
	scanf("%s", &nometimea);
	
	printf("Digite o nome do Time B \n");
	scanf("%s", &nometimeb);
	
	printf("Digite a quantidade de gols do Time A \n");
	scanf("%i", &goltimea);
	
	printf("Digite a quantidade de gols do Time B \n");
	scanf("%i", &goltimeb);
	
	if (goltimea > goltimeb)
	{
		printf("O time %s venceu a partida", &nometimea);
	}
	else if (goltimeb == goltimea)
	{
		printf("Os dois times empataram");
	}
	else
	{
		printf("O time %s venceu a partida", &nometimeb);
	}
	
}

