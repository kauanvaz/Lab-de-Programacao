#include <stdio.h>
#define MAX 10

void fatorial(int A[MAX], int B[MAX]){
	int i, j, produto=1;
	for(i=0; i<MAX; i++){
		for(j=A[i]; j>1; j--){//Fazendo o fatorial
			produto *= j;
		}
		B[i] = produto; //Incluindo o resultado no vetor B
		produto = 1;
	}
}

int main(){
	int A[MAX], B[MAX], i;
	printf("Digite %d numeros: ", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &A[i]);
	}
	fatorial(A, B);
	printf("Fatoriais = ");
	for(i=0; i<MAX; i++){
		printf("%d  ", B[i]);
	}
	return 0;
}