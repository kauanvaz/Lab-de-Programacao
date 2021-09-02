typedef struct{
	float salario;
	int tempo;
}toperario;

#include <stdio.h>
int main(){
	int i, quantInf24=0, somaTempo=0, SalSup600=0;
	toperario x[10];
	
	for(i=0; i<10; i++){
		printf("Digite o salario do operario %d: ", i+1);
		scanf("%f", &x[i].salario);
		printf("Digite o tempo de servico (em meses) do operario %d: ", i+1);
		scanf("%d", &x[i].tempo);
		
		if(x[i].tempo<24){
			quantInf24++;
		}
		
		somaTempo += x[i].tempo;
		
		if(x[i].salario>600){
			SalSup600++;
		}
		printf("\n");
	}
	
	printf("Operarios com menos de 24 meses = %d\n", quantInf24);
	printf("Tempo medio de servico = %.2f meses\n", somaTempo/10.0);
	printf("Porcentagem de salarios superiores a 600 = %.2f porcento\n", SalSup600*10.0);
	return 0;
}