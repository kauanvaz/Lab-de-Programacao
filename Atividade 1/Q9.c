#include <stdio.h>
int main(){
	int i, N, somaImp=0, quantImp=0;
	
	printf("Digite um numero: ");
	scanf("%d", &N);
	
	for(i=N; i>0; i--){
		if(N%2!=0){
			somaImp += i;
			quantImp++;
		}
	}
	
	printf("Media dos inteiros positivos menores ou iguais a %d = %.2f\n", N, (float)somaImp/quantImp);
	
	return 0;
}