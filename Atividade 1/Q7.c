typedef struct{
	float altura;
	int idade;
}taluno;

#include <stdio.h>
int main(){
	int i, somaIM170=0, quantIM170=0, quantAlt20=0;
	taluno x[10];
	float somaAlt20=0;
	
	for(i=0; i<10; i++){
		printf("Digite a idade do aluno %d: ", i+1);
		scanf("%d", &x[i].idade);
		printf("Digite a altura do aluno %d: ", i+1);
		scanf("%f", &x[i].altura);
		
		if(x[i].altura<1.70){
			somaIM170 += x[i].idade;
			quantIM170++;
		}
		
		if(x[i].idade>20){
			somaAlt20 += x[i].altura;
			quantAlt20++;
		}
		printf("\n");
	}
	
	printf("Idade media das pessoas com menos de 1.70 = %.2f anos\n", (float)somaIM170/quantIM170);
	printf("Altura media daqueles com mais de 20 anos = %.2f metros\n", somaAlt20/quantAlt20);
	return 0;
}