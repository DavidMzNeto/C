#include <stdio.h>
int main(){
	
	int num, somanum;
	
	while(num!=-1){
		printf("Digite um numero diferente de -1 ou digite -1 para encerrar o codigo \n");
		scanf("%i", &num);
		
		if(num!=-1){	
		somanum=somanum+num;
		printf("A soma dos numeros digitados eh: %i \n", somanum);
		}
		else
		printf("Codigo encerrado \n");
	}
}
