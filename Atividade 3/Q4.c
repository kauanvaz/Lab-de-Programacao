#include <stdio.h>
#define MAX 30

void par_impar(int X[MAX], int A[MAX], int B[MAX], int *contA, int *contB){
	int i, t, d;
	t = *contA;
	t=0; 
	d = *contB;
	d=0;
	for(i=0; i<MAX; i++){
		if(X[i]%2==0){
			A[t]=X[i];
			t++;
		}
		else{
			B[d]=X[i];
			d++;
		}
	}
	*contA = t;
	*contB = d;
}

int main(){
	int i, X[MAX], A[MAX], B[MAX], contA, contB;
	printf("Digite %d numeros: ", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &X[i]);
	}
	par_impar(X, A, B, &contA, &contB);
	
	printf("Vetor X = ");
	for(i=0; i<MAX; i++){
		printf("%d  ", X[i]);
	}
    printf("\n");
    
	printf("Vetor A = ");
	for(i=0; i<contA; i++){
		printf("%d  ", A[i]);
	}
	printf("\n");
	
	printf("Vetor B = ");
	for(i=0; i<contB; i++){
		printf("%d  ", B[i]);
	}
	return 0;
}