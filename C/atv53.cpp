#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cnt, numsoma=10, vetnum1[10], vetnum2[10], vetsoma[10];
	
	for(cnt=0; cnt<10; cnt++){
		printf("Digite o primeiro n�mero da soma N�%i\n", numsoma);
		scanf("%i", &vetnum1[cnt]); 
		
		printf("Digite o segundo n�mero da soma N�%i\n", numsoma);
		scanf("%i", &vetnum2[cnt]); 
		
		numsoma--;
	}
	
	for(cnt=0; cnt<10; cnt++){
		vetsoma[cnt]=vetnum1[cnt]+vetnum2[cnt];
	}
	
	printf("Os resultados de todas as somas feitas de tr�s para frente �");
	
	for(cnt=9; cnt>=0; cnt--){
		printf(" %i", vetsoma[cnt]);
	}
}
