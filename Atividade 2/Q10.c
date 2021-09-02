#include <stdio.h>
#define NUM 10
int main(){
	int a[NUM], b[NUM], c[2*NUM], i, contA = 0, contB = 0;
	printf("Digite %d numeros para o conjunto A: \n", NUM);
	for(i=0; i<NUM; i++){
		scanf("%d", &a[i]);;
	}
	printf("Digite %d numeros para o conjunto B: \n", NUM);
	for(i=0; i<NUM; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<2*NUM; i++){
		if(i%2 == 0){
			c[i] = a[contA];
			contA++;
		}
		else{
			c[i] = b[contB];
			contB++;
		}
	}
	for(i=0; i<2*NUM; i++){
		printf("%d ", c[i]);
	}
	return 0;
}