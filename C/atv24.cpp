#include <stdio.h>

int main(){
    
    int controle, num, numpos, numneg;
    controle = 1;
    numpos = 0;
    numneg = 0;
    
    while (controle <= 10)
	{
  		printf("Digite um numero \n");
  		scanf("%i", &num);
  		
  		if(num > 0){
			printf("O numero %i eh positivo \n", num);
			numpos ++;
		}
		else if (num < 0){
			printf("O numero %i eh negativo \n", num);
			numneg ++;
		}
		else{
			printf("O numero %i eh nulo \n", num);
		}
		controle ++;
	}
	
	printf("Tem %i numeros positivos \n", numpos);
	printf("Tem %i numeros negativos \n", numneg);
    
}




