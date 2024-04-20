#include <stdio.h>

int main(){
	
	int cargo;
	float salario, salariopos;
	
	printf("Digite o numero correspondente a sua funcao na empresa (1-6) \n");
	scanf("%i", &cargo);
	printf("Digite o numero correspondente salario que voce recebe mensalmente \n");
	scanf("%f", &salario);
	
	switch(cargo)
	{
		case 1 : 
		salariopos = salario * 0.3 + salario;
		printf("Sr(a).Gerente voce recebera 30%% de aumento no seu salario que partira de R$%.2f para R$%.2f", salario, salariopos);
		break;
		
		case 2 : 
		salariopos = salario * 0.4 + salario;
		printf("Sr(a).Vendedor(a) voce recebera 40%% de aumento no seu salario que partira de R$%.2f para R$%.2f", salario, salariopos);
		break;
		
		case 3 : 
		salariopos = salario * 0.5 + salario;
		printf("Sr(a).Programador(a) voce recebera 50%% de aumento no seu salario que partira de R$%.2f para R$%.2f", salario, salariopos);
		break;
		
		case 4 : 
		salariopos = salario * 0.6 + salario;
		printf("Sr(a).Motorista voce recebera 60%% de aumento no seu salario que partira de R$%.2f para R$%.2f", salario, salariopos);
		break;
		
		case 5 : 
		printf("Sr(a).Vereador(a) voce nao recebera aumento no seu salario");
		break;
		
		case 6 : 
		printf("Sr(a).Deputado(a) voce nao recebera aumento no seu salario");
		break;
		
		default : 
		printf("Voce digitou um numero invalido");
	}
}
