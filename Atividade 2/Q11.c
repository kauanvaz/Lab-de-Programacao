#include <stdio.h>
#define NUM 10
int main(){
	int a[NUM], b[NUM], c[NUM], d[2*NUM], i, contA=0, contB=0, contC=0, k=0;
	printf("Digite %d numeros para o conjunto A: \n", NUM);
	for(i=0; i<NUM; i++){
		scanf("%d", &a[i]);;
	}
	printf("Digite %d numeros para o conjunto B: \n", NUM);
	for(i=0; i<NUM; i++){
		scanf("%d", &b[i]);
	}
	printf("Digite %d numeros para o conjunto C: \n", NUM);
	for(i=0; i<NUM; i++){
		scanf("%d", &c[i]);
	}
	for(i=0; i<NUM; i++){
			d[k] = a[contA];
			contA++;
			k++;

			d[k] = b[contB];
			contB++;
			k++;
			
			d[k] = c[contC];
			contC++;
			k++;

	}
	for(i=0; i<3*NUM; i++){
		printf("%d ", d[i]);
	}
	return 0;
}