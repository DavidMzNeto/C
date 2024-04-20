#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int cnt;
	char nome[8][20], nome2[8][20];
	
	printf("Digite 8 nomes diferentes abaixo \n");
	
	for(cnt=0; cnt<8; cnt++){
		printf("Digite o %iº nome: ", cnt+1);
		scanf("%s", nome[cnt]);
	}
	
	for(cnt=0; cnt<8; cnt++){
		int i;
		
		for (i = 0; nome[cnt][i] != '\0'; i++){
			nome2[7-cnt][i] = nome[cnt][i];
		}
		
		nome2[7 - cnt][i] = '\0'; /* é necessario incluir o "\0" para finalizar o tamanho da string . A variavel i ja foi atualizada no laço de repetição acima*/
	}
	
	for(cnt=0; cnt<8; cnt++){
		printf("%s", nome2[cnt]);
	}
}
