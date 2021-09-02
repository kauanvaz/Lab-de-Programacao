#include <stdio.h>
#define NUM 10
int main(){
	int A[NUM], i, soma=0;
	printf("Digite %d numeros: ", NUM);
	for(i=0; i<NUM; i++){
		scanf("%d", &A[i]);
		soma += A[i]*A[i];
	}
	printf("Soma dos quadrados = %d", soma);
	return 0;
}