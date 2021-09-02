#include <stdio.h>
#define MAX 5
int main(){
	int i, idades[MAX];
	float alturas[MAX];
   	for(i=0; i<MAX; i++){
  		printf("Digite a idade e a altura, respectivamente, da pessoa %d: ", i+1);
	   	scanf("%d%f", &idades[i], &alturas[i]);
	}
	printf("Idades = ");
	for(i=MAX-1; i>=0; i--){
		printf("%d ", idades[i]);
	}
	printf("\n");
	printf("Alturas = ");
	for(i=MAX-1; i>=0; i--){
		printf("%.2f ", alturas[i]);
	}
	
	return 0;
}