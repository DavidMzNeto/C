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
	
	printf("\nEntre com o número da sua conta corrente: ");
	scanf("%i", &corrente);
	
	printf("Entre com o valor da sua conta corrente: ");
	scanf("%i", &estq1);
	
	printf("\nEntre com o número da sua conta poupança: ");
	scanf("%i", &poupanca);
	
	do{
		printf("Entre com o valor da sua conta poupança: ");
		scanf("%i", &estq2);
		
		if(estq2<0){
			printf("\nO saldo da conta poupança não pode ser inferior a 0, por favor digite outro valor \n\n");
		}
	} while(estq2<0);
	
	int opcao;
	
	do{
		printf("\nO que deseja fazer:\n ");
		printf("1 - Creditar\n 2 - Debitar\n 3 - Transfererir\n 4 - Consultar saldo\n 5 - Sair\n\n");
		
		printf("Escolha uma opção: ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1: 
				int emp;
				do {
					
					printf("\nQual conta você gostaria de creditar ?\n");
					printf("*(1) Corrente (2) Poupança\n");
					printf("Escolha: ");
				
					scanf("%i", &emp);
				
					if(emp==1){
						int qnt;
						
						printf("\nSaldo atual da conta corrente nº %i: R$%i\n", corrente, estq1);
						
						printf("Digite o valor a ser creditado: ");
						scanf("%i", &qnt);
						
						estq1=estq1+qnt;
						
						printf("\nValor creditado :) seu novo saldo é: R$%i\n", estq1);	
					}
					else if (emp==2){
						int qnt;
						
						printf("\nSaldo atual da conta poupança nº %i: R$%i\n", corrente, estq2);
						
						printf("Digite o valor a ser creditado: ");
						scanf("%i", &qnt);
						
						estq2=estq2+qnt;
						
						printf("\nValor creditado :) seu novo saldo é: R$%i\n", estq2);
					}
					
					else{
						printf("\nO número digitado é invalido. Por favor digite novamente!\n");
					}
					
				} while (emp != 1 && emp != 2);
				
				break;
		
			case 2: 
				int emp2;
				do {
					printf("\nQual conta você gostaria de creditar ?\n");
					printf("*(1) Corrente (2) Poupança\n");
					printf("Escolha: ");
				
					scanf("%i", &emp2);
				
					if(emp2==1){
						int qnt;
						
						printf("\nSaldo atual da conta corrente nº %i: R$%i\n", corrente, estq1);
						printf("Digite o valor a ser debitado: ");
						
						scanf("%i", &qnt);
						
						estq1=estq1-qnt;
						printf("\nValor retirado :) seu novo saldo é: R$%i\n", estq1);
					}
					else if (emp2==2){
						int qnt;
						int controle=0;
						
						printf("\nSaldo atual da conta corrente nº %i: R$%i\n", poupanca, estq2);
						
						while(controle==0){
							printf("Digite o valor a ser debitado: ");
							scanf("%i", &qnt);
							
							if(qnt>estq1){
								printf("\nO valor digitado é superior ao saldo disponivel, Por favor digite um valor coerente\n\n");
							}
							else{
								estq2=estq2-qnt;
								printf("\nValor retirado :) seu novo saldo é: R$%i\n", estq2);
								controle++;
							}	
						}
					}
					
					else{
						printf("\nO número digitado é invalido. Por favor digite novamente!\n");
					}
					
				} while (emp2 != 1 && emp2 != 2);
				
				break;
					
			case 3: 
				int emp3;
				printf("Bem vindo a aba de Transferência de saldo\n\n");
				
				do {
					
					printf("Qual operação você deseja realizar?\n");
					printf("(1) Conta corrente ---> Conta poupança (saldo para transação: R$%i) \n", estq1);
					printf("(2) Conta poupança ---> Conta corrente (saldo para transação: R$%i)\n\n", estq2);
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
						printf("Novo saldo conta poupança: R$%i\n", estq2);
					}
					else if (emp3==2){
						int qnt;
						int controle=0;
						
						printf("\nConta poupança. saldo atual: R$%i\n", estq2);
						
						while(controle==0){
							printf("Digite o valor que sera transferido da CP %i para CC %i: ", poupanca, corrente);
							scanf("%i", &qnt);
							
							if(qnt>estq2){
								printf("\nO valor digitado é superior ao saldo disponivel, Por favor digite um valor coerente\n\n");
							}
							else{
								estq2=estq2-qnt;
								estq1=estq1+qnt;
								
								printf("\nValor transferido :)\n\n");
								printf("Novo saldo conta poupança: R$%i\n", estq2);
								printf("Novo saldo conta corrente: R$%i\n", estq1);
								
								controle++;
							}	
						}
					}
					
					else{
						printf("\nO número digitado é invalido. Por favor digite novamente!\n");
					}
					
				} while (emp3 != 1 && emp3 != 2);
				
				break;
				
			case 4:
				int emp4;
				printf("\nBem vindo a aba de conferência de saldo\n\n");
				
				do{
					printf("Você deseja consultar o saldo de qual conta? \n");
					printf("(1) Conta corrente (2) Conta poupança\n");
					printf("Escolha: ");
					
					scanf("%i", &emp4);
					
					if(emp4==1){
						printf("\nSenhor %s\n", nome);
						printf("\nO saldo disponivel na sua conta corrente é: R$%i\n", estq1);
						break;
					}
					else if(emp4==2){
						printf("\nSenhor %s\n", nome);
						printf("\nO saldo disponivel na sua conta poupança é: R$%i\n", estq2);
						break;
					}
					else{
						printf("\nO número digitado é invalido. Por favor digite novamente!\n\n");
					}
				} while(emp != 1 && emp != 2);
				
				break;
			
			case 5: 
				printf("Obrigado por acessar o sistema do nosso banco :)");
				break;
				
			default: 
				printf("\nOpção inválida, por favor digite uma das opções listadas abaixo\n");
		}
	}while(opcao!=5);	
}
