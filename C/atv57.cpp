#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cnt;
	float valor1[10], valor2[10]; 
	
	printf("Digite o pre�o de 10 produtos abaixo: \n");
	
	for(cnt=0; cnt<10; cnt++){
		printf("Digite o %i� pre�o: ", cnt+1);
		scanf("%f", &valor1[cnt]);
	}
	
	for(cnt=0; cnt<10; cnt++){
		valor2[cnt] = (valor1[cnt] * 0.10) + valor1 [cnt];
	}
	
	for(cnt=0; cnt<10; cnt++){
		printf("O valor atualizado do %i� pre�o �: %.2f \n", cnt+1, valor2[cnt]);
	}
}
