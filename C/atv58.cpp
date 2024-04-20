#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cnt, numant[5], numpos;
	
	printf("Digite 5 numeros abaixo para que sejam localizado o menor elemento \n");
	
	for(cnt=0; cnt<5; cnt++){
		printf("Digite o %iº número: ", cnt+1);
		scanf("%i", &numant[cnt]);
	}
	
	numpos = numant[0];
	
	for(cnt=1; cnt<5; cnt++){
		if(numant[cnt]<numant[cnt-1]){
			numpos = numant[cnt];
		}
	}
	
	printf("O menor número encontrado foi: %i", numpos);
	
}
