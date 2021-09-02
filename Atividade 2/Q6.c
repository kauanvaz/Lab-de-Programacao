#include <stdio.h>
#define MAX_ALUNOS 10
#define MAX_NOTAS 4
int main(){
	float notas[MAX_ALUNOS][MAX_NOTAS], soma=0, media[MAX_ALUNOS];
	int i, j;
	for(i=0; i<MAX_ALUNOS; i++){
		printf("Digite as %d notas do aluno %d: ", MAX_NOTAS, i+1);
		for(j=0; j<MAX_NOTAS; j++){
			scanf("%f", &notas[i][j]);
			soma += notas[i][j];
		}
		media[i] = soma/MAX_NOTAS;
		soma=0;
	}
	printf("Medias maiores ou iguais a 7\n");
	for(i=0; i<MAX_ALUNOS; i++){
		if(media[i]>=7)
			printf("Aluno %d = %.2f\n",i+1, media[i]);
	}
	return 0;
}