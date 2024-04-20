#include <stdio.h>
#include <locale>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	printf("********************************************************* \n\n");
	printf("*Bem vindo ao sistema de controle da Tijolos KS e filial* \n\n");
	printf("********************************************************* \n\n");
	
	int estq1, estq2;
	
	printf("Entre com o estoque inicial de Tijolos da empresa 1 - Tijolos KS: ");
	scanf("%i", &estq1);
	
	printf("Entre com o estoque inicial de Tijolos da empresa 2 - Tijolos Paraju: ");
	scanf("%i", &estq2);
	
	int opcao;
	
	do{
		printf("\nO que deseja fazer:\n ");
		printf("1 - Entrada de Estoque\n 2 - Saída de Estoque\n 3 - Transferência de Estoque\n 4 - Consulta Estoque\n 5 - Finalizar\n\n");
		
		printf("Escolha uma opção: ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1: 
				int emp;
				do {
					
					printf("\nEm qual empresa você deseja realizar uma entrada de estoque ?\n");
					printf("*(1) Tijolos KS (2) Tijolos Paraju\n");
					printf("Escolha: ");
				
					scanf("%i", &emp);
				
					if(emp==1){
						int qnt;
						
						printf("\nTijolos KS. Estoque atual: %i\n", estq1);
						
						printf("Digite o valor a ser adicionado ao estoque da Tijolos KS: ");
						scanf("%i", &qnt);
						
						estq1=estq1+qnt;
						
						printf("\nValor adicionado :) seu novo estoque é: %i\n", estq1);	
					}
					else if (emp==2){
						int qnt;
						
						printf("\nTijolos Paraju. Estoque atual: %i\n", estq2);
						
						printf("Digite o valor a ser adicionado ao estoque da Tijolos Paraju: ");
						scanf("%i", &qnt);
						
						estq2=estq2+qnt;
						
						printf("\nValor adicionado :) seu novo estoque é: %i\n", estq2);
					}
					
					else{
						printf("\nO número digitado é invalido. Por favor digite novamente!\n");
					}
					
				} while (emp != 1 && emp != 2);
				
				break;
		
			case 2: 
				int emp2;
				do {
					
					printf("\nEm qual empresa você deseja realizar uma retirada de estoque ?\n");
					printf("*(1) Tijolos KS (2) Tijolos Paraju\n");
					printf("Escolha: ");
				
					scanf("%i", &emp2);
				
					if(emp2==1){
						int qnt;
						
						printf("\nTijolos KS. Estoque atual: %i\n", estq1);
						
						while(1){
							printf("Digite o valor a ser removido do estoque da Tijolos KS: ");
							scanf("%i", &qnt);
							
							if(qnt>estq1){
								printf("\nO valor digitado é superior ao valor disponivel em estoque, Por favor digite um valor coerente\n\n");
							}
							else{
								estq1=estq1-qnt;
								printf("\nValor retirado :) seu novo estoque é: %i\n", estq1);
								break;
							}	
						}
					}
					else if (emp2==2){
						int qnt;
						
						printf("\nTijolos Paraju. Estoque atual: %i\n", estq2);
						
						while(1){
							printf("Digite o valor a ser removido do estoque da Tijolos Paraju: ");
							scanf("%i", &qnt);
							
							if(qnt>estq2){
								printf("\nO valor digitado é superior ao valor disponivel em estoque, Por favor digite um valor coerente\n\n");
							}
							else{
								estq2=estq2-qnt;
								printf("\nValor retirado :) seu novo estoque é: %i\n", estq2);
								break;
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
				printf("Bem vindo a aba de Transferência de estoque\n\n");
				
				do {
					
					printf("Qual operação você deseja realizar?\n");
					printf("(1) Tijolos KS ---> Tijolos Paraju (Estoque para transação: %i) \n", estq1);
					printf("(2) Tijolos Paraju ---> Tijolos KS (Estoque para transação: %i)\n\n", estq2);
					printf("Escolha: ");
				
					scanf("%i", &emp3);
				
					if(emp3==1){
						int qnt;
						
						printf("\nTijolos KS. Estoque atual: %i\n", estq1);
						
						while(1){
							printf("Digite o valor que sera transferido da Tijolos KS para Tijolos Paraju: ");
							scanf("%i", &qnt);
							
							if(qnt>estq1){
								printf("\nO valor digitado é superior ao valor disponivel em estoque, Por favor digite um valor coerente\n\n");
							}
							else{
								estq1=estq1-qnt;
								estq2=estq2+qnt;
								
								printf("\nValor transferido :)\n\n");
								printf("Novo estoque Tijolos KS: %i\n", estq1);
								printf("Novo estoque Tijolos Paraju: %i\n", estq2);
								
								break;
							}	
						}
					}
					else if (emp3==2){
						int qnt;
						
						printf("\nTijolos Paraju. Estoque atual: %i\n", estq2);
						
						while(1){
							printf("Digite o valor que sera transferido da Tijolos Paraju para Tijolos KS: ");
							scanf("%i", &qnt);
							
							if(qnt>estq2){
								printf("\nO valor digitado é superior ao valor disponivel em estoque, Por favor digite um valor coerente\n\n");
							}
							else{
								estq2=estq2-qnt;
								estq1=estq1+qnt;
								
								printf("\nValor transferido :)\n\n");
								printf("Novo estoque Tijolos Paraju: %i\n", estq2);
								printf("Novo estoque Tijolos KS: %i\n", estq1);
								
								break;
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
				printf("\nBem vindo a aba de conferência de estoque\n\n");
				
				do{
					printf("Você deseja consultar o valor em estoque de qual Empresa? \n");
					printf("(1) Tijolos KS (2) Tijolos Paraju\n");
					printf("Escolha: ");
					
					scanf("%i", &emp4);
					
					if(emp4==1){
						printf("\nO estoque disponivel da empresa Tijolos KS é: %i\n", estq1);
						break;
					}
					else if(emp4==2){
						printf("\nO estoque disponivel da empresa Tijolos Paraju é: %i\n", estq2);
						break;
					}
					else{
						printf("\nO número digitado é invalido. Por favor digite novamente!\n\n");
					}
				} while(emp != 1 && emp != 2);
				
				break;
			
			case 5: 
				printf("Obrigado por acessar o sistema :)");
				break;
				
			default: 
				printf("\nOpção inválida, por favor digite uma das opções listadas abaixo\n");
		}
	}while(opcao!=5);	
}
