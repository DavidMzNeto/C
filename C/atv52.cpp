#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cnt, vetnum1[10], vetnum2[10], vetsoma[10];
	
	for(cnt=0; cnt<10; cnt++){
		printf("Entre com o primeiro valor da soma Nº%i\n", cnt+1);
		scanf("%i", &vetnum1[cnt]);
		
		printf("Entre com o segundo valor da soma Nº%i\n", cnt+1);
		scanf("%i", &vetnum2[cnt]);
	}	
	
	for(cnt=0; cnt<10; cnt++){
		vetsoma[cnt]=vetnum1[cnt]+vetnum2[cnt];
	}
	
	printf("Os resultados de todas as somas realizadas são: ");
	
	for(cnt=0; cnt<10; cnt++){
		printf(" %i", vetsoma[cnt]);
	}
		
}

 
