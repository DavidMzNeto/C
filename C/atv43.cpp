#include <stdio.h>

int main(){
	
	int cnt, num, numneg=0, numpos=0;
	
	while (cnt < 5)
	{
		printf("Digite 5 numeros aleatorios \n");
		scanf("%i", &num);
		
		if (num < 0){
		
			printf("O numero digitado eh negativo \n");
			numneg++;
		}
		else if (num > 0){
			printf("O numero digitado eh positivo \n");
			numpos++;
		}
		
		cnt++;
	}
	
	printf("A quantidade de numeros positivos eh %i \n", numpos);
	printf("A quantidade de numeros negativos eh %i \n", numneg);
}
