typedef struct
{
	char nome[25], sexo;
	float altura;
} tpessoa;

#include <stdio.h>
int main(){
	tpessoa x[10];
	int i, quantF = 0, quantM = 0, k;
	float MaiorAlt, SAM = 0;
	char op;

	for(i = 0; i < 10; i++){
		printf("Digite o nome da pessoa %d: ", i + 1);
		scanf("%s", x[i].nome);
		printf("Digite a altura da pessoa %d: ", i + 1);
		scanf("%f", &x[i].altura);
		printf("Digite o sexo da pessoa %d (M/F): ", i + 1);

		do{
			scanf(" %c", &op);
			switch(op){
				case 'M':
					x[i].sexo = op;
					break;
				case 'F':
					x[i].sexo = op;
					break;
				default:
					printf("Opcao invalida!\n Digite novamente: ");
			}
		}while(op != 'M' && op != 'F');

		if(i == 0){
			MaiorAlt = x[i].altura;
			k = i;
		}
		else{
			if(x[i].altura > MaiorAlt){
				MaiorAlt = x[i].altura;
				k = i;
			}
		}

		if(x[i].sexo == 'F'){
			SAM += x[i].altura;
			quantF++;
		}else{
			quantM++;
		}
		printf("\n");	
	}
	
    printf("Maior altura do grupo: %s (%.2f metros)\n", x[k].nome, MaiorAlt);
	printf("Media de altura das mulheres = %.2f\n", SAM / quantF);
	printf("Quantidade de homens = %d\n", quantM);
	printf("Porcentagem de mulheres = %.2f porcento\n", quantF*10.0);
	return 0;
}