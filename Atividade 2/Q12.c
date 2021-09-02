typedef struct{
	int idade;
	float altura;
}taluno;

#include <stdio.h>
#define NUM 3
int main(){
	int i, cont=0;
	taluno a[NUM];
	float somaAlt=0;
	for(i=0; i<NUM; i++){
		printf("Digite, respectivamente, a idade e a altura do aluno %d: \n", i+1);
		scanf("%d%f", &a[i].idade, &a[i].altura);
		somaAlt += a[i].altura;
	}
	for(i=0; i<NUM; i++){
		if(a[i].idade>13 && a[i].altura<(somaAlt/NUM)){
			cont++;
		}
	}
	
	printf("Media de alturas = %.2f\nAlunos com mais de 13 anos e altura inferior a media = %d",somaAlt/NUM ,cont);
	return 0;
}