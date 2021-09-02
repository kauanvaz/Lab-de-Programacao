#include <stdio.h>
#define MAX 20
int main(){
	int i, num[MAX], impar[20], par[20], contImpar=0, contPar=0;
	printf("Digite %d numeros: ", MAX);
	for(i=0; i<MAX; i++){
		scanf("%d", &num[i]);
		if(num[i]%2 != 0){
			impar[contImpar] = num[i];
			contImpar++;
		}
		else{
			par[contPar] = num[i];
			contPar++;
		}
	}
	
	for(i=0; i<MAX; i++){
		printf("%d  ", num[i]);
	}
	printf("\n");
	for(i=0; i<contImpar; i++){
		printf("%d  ", impar[i]);
	}
	printf("\n");
	for(i=0; i<contPar; i++){
		printf("%d  ", par[i]);
	}	
	return 0;
}