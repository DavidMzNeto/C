#include <stdio.h>

int main (){
	
	int cnt, num, numjov=0, numido;
	
	while (cnt < 10)
	{
		printf("Digite uma idade \n");
		scanf("%i", &num);
		
		if(num < 21)
		{
			numjov++;
		}
		else if(num > 50)
		{
			numido++;
		}
		
		cnt ++;
	}
	
	printf("A quantidade de pessoas registradas com idade inferior a 21 anos eh: %i \n", numjov);
	printf("A quantidade de pessoas registradas com idade superior a 50 anos eh: %i \n", numido);
}
