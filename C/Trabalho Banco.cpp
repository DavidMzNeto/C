#include <stdio.h>
#include <locale>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	printf("******************************************* \n\n");
	printf("*Bem vindo ao sistema de controle do Banco* \n\n");
	printf("******************************************* \n\n");
	
	int corrente, poupanca, estq1, estq2;
	char nome[50];
	
	printf("Entre com o seu nome: ");
	scanf("%s", &nome);
	
	printf("\nEntre com o n�mero da sua conta corrente: ");
	scanf("%i", &corrente);
	
	printf("Entre com o valor da sua conta corrente: ");
	scanf("%i", &estq1);
	
	printf("\nEntre com o n�mero da sua conta poupan�a: ");
	scanf("%i", &poupanca);
	
	do{
		printf("Entre com o valor da sua conta poupan�a: ");
		scanf("%i", &estq2);
		
		if(estq2<0){
			printf("\nO saldo da conta poupan�a n�o pode ser inferior a 0, por favor digite outro valor \n\n");
		}
	} while(estq2<0);
	
	int opcao;
	
	do{
		printf("\nO que deseja fazer:\n ");
		printf("1 - Creditar\n 2 - Debitar\n 3 - Transfererir\n 4 - Consultar saldo\n 5 - Sair\n\n");
		
		printf("Escolha uma op��o: ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1: 
				int emp;
				do {
					
					printf("\nQual conta voc� gostaria de creditar ?\n");
					printf("*(1) Corrente (2) Poupan�a\n");
					printf("Escolha: ");
				
					scanf("%i", &emp);
				
					if(emp==1){
						int qnt;
						
						printf("\nSaldo atual da conta corrente n� %i: R$%i\n", corrente, estq1);
						
						printf("Digite o valor a ser creditado: ");
						scanf("%i", &qnt);
						
						estq1=estq1+qnt;
						
						printf("\nValor creditado :) seu novo saldo �: R$%i\n", estq1);	
					}
					else if (emp==2){
						int qnt;
						
						printf("\nSaldo atual da conta poupan�a n� %i: R$%i\n", corrente, estq2);
						
						printf("Digite o valor a ser creditado: ");
						scanf("%i", &qnt);
						
						estq2=estq2+qnt;
						
						printf("\nValor creditado :) seu novo saldo �: R$%i\n", estq2);
					}
					
					else{
						printf("\nO n�mero digitado � invalido. Por favor digite novamente!\n");
					}
					
				} while (emp != 1 && emp != 2);
				
				break;
		
			case 2: 
				int emp2;
				do {
					printf("\nQual conta voc� gostaria de creditar ?\n");
					printf("*(1) Corrente (2) Poupan�a\n");
					printf("Escolha: ");
				
					scanf("%i", &emp2);
				
					if(emp2==1){
						int qnt;
						
						printf("\nSaldo atual da conta corrente n� %i: R$%i\n", corrente, estq1);
						printf("Digite o valor a ser debitado: ");
						
						scanf("%i", &qnt);
						
						estq1=estq1-qnt;
						printf("\nValor retirado :) seu novo saldo �: R$%i\n", estq1);
					}
					else if (emp2==2){
						int qnt;
						int controle=0;
						
						printf("\nSaldo atual da conta corrente n� %i: R$%i\n", poupanca, estq2);
						
						while(controle==0){
							printf("Digite o valor a ser debitado: ");
							scanf("%i", &qnt);
							
							if(qnt>estq1){
								printf("\nO valor digitado � superior ao saldo disponivel, Por favor digite um valor coerente\n\n");
							}
							else{
								estq2=estq2-qnt;
								printf("\nValor retirado :) seu novo saldo �: R$%i\n", estq2);
								controle++;
							}	
						}
					}
					
					else{
						printf("\nO n�mero digitado � invalido. Por favor digite novamente!\n");
					}
					
				} while (emp2 != 1 && emp2 != 2);
				
				break;
					
			case 3: 
				int emp3;
				printf("Bem vindo a aba de Transfer�ncia de saldo\n\n");
				
				do {
					
					printf("Qual opera��o voc� deseja realizar?\n");
					printf("(1) Conta corrente ---> Conta poupan�a (saldo para transa��o: R$%i) \n", estq1);
					printf("(2) Conta poupan�a ---> Conta corrente (saldo para transa��o: R$%i)\n\n", estq2);
					printf("Escolha: ");
				
					scanf("%i", &emp3);
				
					if(emp3==1){
						int qnt;
						
						printf("\nConta corrente. saldo atual: R$%i\n", estq1);
						printf("Digite o valor que sera transferido da CC %i para CP %i: ", corrente, poupanca);
						
						scanf("%i", &qnt);
						
						estq1=estq1-qnt;
						estq2=estq2+qnt;
						
						printf("\nValor transferido :)\n\n");
						printf("Novo saldo conta corrente: R$%i\n", estq1);
						printf("Novo saldo conta poupan�a: R$%i\n", estq2);
					}
					else if (emp3==2){
						int qnt;
						int controle=0;
						
						printf("\nConta poupan�a. saldo atual: R$%i\n", estq2);
						
						while(controle==0){
							printf("Digite o valor que sera transferido da CP %i para CC %i: ", poupanca, corrente);
							scanf("%i", &qnt);
							
							if(qnt>estq2){
								printf("\nO valor digitado � superior ao saldo disponivel, Por favor digite um valor coerente\n\n");
							}
							else{
								estq2=estq2-qnt;
								estq1=estq1+qnt;
								
								printf("\nValor transferido :)\n\n");
								printf("Novo saldo conta poupan�a: R$%i\n", estq2);
								printf("Novo saldo conta corrente: R$%i\n", estq1);
								
								controle++;
							}	
						}
					}
					
					else{
						printf("\nO n�mero digitado � invalido. Por favor digite novamente!\n");
					}
					
				} while (emp3 != 1 && emp3 != 2);
				
				break;
				
			case 4:
				int emp4;
				printf("\nBem vindo a aba de confer�ncia de saldo\n\n");
				
				do{
					printf("Voc� deseja consultar o saldo de qual conta? \n");
					printf("(1) Conta corrente (2) Conta poupan�a\n");
					printf("Escolha: ");
					
					scanf("%i", &emp4);
					
					if(emp4==1){
						printf("\nSenhor %s\n", nome);
						printf("\nO saldo disponivel na sua conta corrente �: R$%i\n", estq1);
						break;
					}
					else if(emp4==2){
						printf("\nSenhor %s\n", nome);
						printf("\nO saldo disponivel na sua conta poupan�a �: R$%i\n", estq2);
						break;
					}
					else{
						printf("\nO n�mero digitado � invalido. Por favor digite novamente!\n\n");
					}
				} while(emp != 1 && emp != 2);
				
				break;
			
			case 5: 
				printf("Obrigado por acessar o sistema do nosso banco :)");
				break;
				
			default: 
				printf("\nOp��o inv�lida, por favor digite uma das op��es listadas abaixo\n");
		}
	}while(opcao!=5);	
}
