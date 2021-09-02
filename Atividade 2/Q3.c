#include <stdio.h>
#define MAX 4
int main(){
	int i;
	float notas[MAX], soma=0;
	printf("Digite %d notas: ", MAX);
	for(i=0; i<MAX; i++){
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	for(i=0; i<MAX; i++){
		printf("Notas = %.2f\n", notas[i]);
	}
	printf("Media = %.2f", soma/MAX);
	
	return 0;
}