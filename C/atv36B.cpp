#include <stdio.h>
int main(){
	
	int cnt, num, somapar, somaimpar, qntpar, qntimpar, mediapar, mediaimpar;
	
	for (cnt=0; cnt<5; cnt++){
	printf("Digite um numero diferente de 0 \n");
	scanf("%i", &num);	
	if(num!=0){
		if(num%2==0){
			somapar=somapar+num;
			qntpar++;
			mediapar=somapar/qntpar;
			printf("O numero digitado eh par \n");
		}
		else{
			somaimpar=somaimpar+num;
			qntimpar++;
			mediaimpar=somaimpar/qntimpar;
			printf("O numero digitado eh impar \n");
		}
	}
	else
	cnt--;
	}
	
	printf("A media dos numeros pares digitados eh: %i \n", mediapar);
	printf("A media dos numeros impares digitados eh: %i \n", mediaimpar);
}
