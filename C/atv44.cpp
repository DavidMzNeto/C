#include <stdio.h>
int main(){
	
	int cnt, num, somapos, somaneg;
	
	while(cnt<5){
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(num>0){
			printf("O numero digitado eh positivo \n");
			somapos=somapos+num;
		}
		else if(num<0){
			printf("O numero digitado eh negativo \n");
			somaneg=somaneg+num;
		}
		else
		printf("Numero Invalido \n");
		
		cnt++;
	}
	
	printf("O resultado da soma de todos os numeros positivos eh: %i \n", somapos);
	printf("O resultado da soma de todos os numeros negativos eh: %i \n", somaneg);
}
