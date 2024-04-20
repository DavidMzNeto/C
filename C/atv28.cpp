#include <stdio.h>

int main(){
	
	int cnt, num, numpos=0, somapos, numneg, somaneg;
	
	while(cnt < 15)
	{
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(num > 0)
		{
			somapos += num;
			numpos++;
		}
		else if(num < 0)
		{
			somaneg += num;
			numneg++;
		}
		else
		{
		printf ("numero nulo \n");
		}
		
		cnt++;
	}
	
	printf("%i numeros sao positivos e a soma total de todos eles eh: %i \n", numpos, somapos);
	printf("%i numeros sao negativos e a soma total de todos eles eh: %i", numneg, somaneg);
}
