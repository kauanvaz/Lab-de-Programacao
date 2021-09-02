void meses (int x){
	switch(x){
		case 0:
			printf("%d - Janeiro = ", x+1);
			break;
		case 1:
			printf("%d - Fevereiro = ", x+1);
			break;
		case 2:
			printf("%d - Marco = ", x+1);
			break;
		case 3:
			printf("%d - Abril = ", x+1);
			break;
		case 4:
			printf("%d - Maio = ", x+1);
			break;
		case 5:
			printf("%d - Junho = ", x+1);
			break;
		case 6:
			printf("%d - Julho = ", x+1);
			break;
		case 7:
			printf("%d - Agosto = ", x+1);
			break;
		case 8:
			printf("%d - Setembro = ", x+1);
			break;
		case 9:
			printf("%d - Outubro = ", x+1);
			break;
		case 10:
			printf("%d - Novembro = ", x+1);
			break;
		case 11:
			printf("%d - Dezembro = ", x+1);
			break;
	}
}
#include <stdio.h>
int main(){
	int i;
	float temp[12], soma=0;
	printf("Digite a temperatura media de cada mes (em ordem): \n");
	for(i=0; i<12; i++){
		scanf("%f", &temp[i]);
		soma+=temp[i];
	}
	printf("Media anual = %.2f\n", soma/12);
    printf("Temperaturas acima da media anual: \n");
	for(i=0; i<12; i++){
		if(temp[i]>(soma/12)){
			meses(i);
			printf(" %.2f\n", temp[i]);
		}
			
	}
	

	return 0;
}