#include <stdio.h>

int main(){
	
	int cnt=0, num, media,aprv=0, naprv=0, somapos, somaneg;
	
	while(cnt<10)
	{
	printf("Digite a sua nota final \n");
	scanf("%i", &num);
	
	if(num>=60)
	{
		aprv++;
	}
	else if (num<60)
	{
		naprv++;
	}
	else
	{
		printf("Numero nulo \n");
	}
	media+=num;
	
	cnt++;
	}
	
	media=media/10;
	
	printf("A media das notas eh %i  \n", media);
	printf("A quantidade de alunos aprovados eh %i \n", aprv);
	printf("A quantidade de alunos nao aprovados eh %i \n", naprv);
	
}
	
	
	
	
