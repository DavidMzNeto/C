#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cnt, vetnum[5];
	
	for(cnt=0; cnt<5; cnt++){
		printf("Digite um n�mero para ser multiplicado por 10 posteriormente: "); 
		scanf("%i", &vetnum[cnt]);
	}
	
	for(cnt=0; cnt<5; cnt++){
		if (vetnum[cnt] %2 == 1){
			vetnum[cnt] = vetnum[cnt] * 10;
		}
	}
	
	printf("O resultado de todas as multiplica��es feitas �: ");
	for(cnt=0; cnt<5; cnt++){
		printf(" %i", vetnum[cnt]);
	}
}
