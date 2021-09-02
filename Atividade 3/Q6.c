#include <stdio.h>
#define MAX 10

void troca(int A[MAX][MAX]){
	int M[MAX], X; //Vetor auxiliar
	int i, j;
	for(i=0; i<MAX; i++){ //Guardar linha 2 no vetor auxiliar
		M[i] = A[1][i]; 
	}
	for(i=0; i<MAX; i++){ //Trocar linha 2 pela linha 8
		A[1][i] = A[7][i];
		A[7][i] = M[i];
	}
	
	for(i=0; i<MAX; i++){ //Guardar coluna 4 no vetor auxiliar
		M[i] = A[i][3]; 
	}
	for(i=0; i<MAX; i++){ //Trocar coluna 4 pela coluna 10
		A[i][3] = A[i][9];
		A[i][9] = M[i];
	}
	
	for(i=0; i<MAX; i++){
		X = A[i][i];
		A[i][i] = A[i][9-i];
		A[i][9-i] = X;
	}
	
	for(i=0; i<MAX; i++){ //Guardar linha 5 no vetor auxiliar
		M[i] = A[4][i]; 
	}
	for(i=0; i<MAX; i++){ //Trocar linha 5 pela coluna 10
		A[4][i] = A[i][9];
		A[i][9] = M[i];
	}
}

int main(){
	int A[MAX][MAX], i, j;
	printf("Digite %d numeros: ", MAX*MAX);
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	troca(A);
	for(i=0; i<MAX; i++){
		for(j=0; j<MAX; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}