#include <stdio.h>

int main(){


		int num;
		
		scanf("%i", &num);
		
		if (num % 2==0 && num > 0)
		{
		
			printf("Esse numero e par");
		}
		else if (num == 0)
		{
			printf("Esse numeor e nulo");
			
		}
			
		else 
		{
		printf("Esse numero e impar");
		}
}

