#include <stdio.h>
int main(){
	
	int cnt, num, qntpos=0, qntneg=0, somapos, somaneg, mediapos, medianeg;
	
	for(cnt = 0; cnt < 5; cnt++){
    printf("Digite um numero diferente de 0 \n");
    scanf("%i", &num);
    
    if(num!=0){
    	if(num > 0){
    		somapos=somapos+num;
    		qntpos++;
    		mediapos=somapos/qntpos;
		}
		else if(num < 0){
			somaneg=somaneg+num;
			qntneg++;
			medianeg=somaneg/qntneg;
		}
	}
	else{
		cnt--;
	}
	}
	printf("A media dos numeros positivos eh: %i \n", mediapos);
	printf("A media dos numeros negativos eh: %i \n", medianeg);
	

}
