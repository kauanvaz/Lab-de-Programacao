#include <stdio.h>
int main(){
	float num[10], somaNeg=0, somaTotal=0;
	int i, quantPos=0, quantNeg=0, quantNul=0;
	printf("Digite 10 numeros quaisquer: ");
	for(i=0; i<10; i++){
		scanf("%f", &num[i]);
		if(num[i]>0){
			quantPos++;
		}
		else if(num[i]<0){
			quantNeg++;
			somaNeg += num[i];
		}
		else{
			quantNul++;
		}
		somaTotal = num[i];
	}
	printf("Positivos = %d\n", quantPos);
	printf("Negativos = %d\n", quantNeg);
	printf("Nulos = %d\n", quantNul);
	printf("Media dos negativos = %.2f\n", somaNeg/quantNeg);
	printf("Soma total = %.2f\n", somaTotal);
	return 0;
}