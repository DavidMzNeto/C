#include <stdio.h>
int main (){
	
	int num, soma;
	
	while (num!=0){
		
		printf("Digite um numero diferente de 0 para ser somado ou 0 para finalizar a execucao do codigo \n");
		scanf("%i", &num);
		
		if(num>5)
		soma=soma+num;
		
		if(num!=0)
		printf("A soma de todos os numeros digitados maiores do que 5 %i \n", soma);
	}
	
	printf("Execucao do codigo finalizada \n");
}
