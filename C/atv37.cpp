#include <stdio.h>
int main(){
	
	int cnt, nota, aluno, somanotas, aprv, idade, velhos, medianotas;
	
	for (cnt=0; cnt < 30; cnt++){
		printf("Digite a nota do aluno %i \n", aluno);
		scanf("%i", &nota);
		
		printf("Digite a idade do aluno %i \n", aluno);
		scanf("%i", &idade);
		
		if(nota>70)
		aprv++;
		
		if(idade>20)
		velhos++;
		
		somanotas=somanotas+nota;
		medianotas=somanotas/30;
		aluno++;
	}
	
	printf("A quantidade de alunos que tiraram nota superior a 70 pontos eh: %i \n", aprv);
	printf("A quantidade de alunos que tem idade superior a 20 anos eh: %i \n", velhos);
	printf("A media das notas finais da turma eh: %i \n", medianotas);
	
}
