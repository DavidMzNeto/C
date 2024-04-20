#include <stdio.h>
int main(){
	
	int num=1;
	
	while(num!=0){
		printf("Digite um numero \n");
		scanf("%i", &num);
		
		if(num!=0){	
		
			if(num%2==0){
				printf("%i eh par \n", num);
			}
		}
		else
		printf("Codigo encerrado \n");
	}
}
