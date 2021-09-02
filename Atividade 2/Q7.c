#include <stdio.h>
#define MAX 5
int main(){
	int i, num[MAX], soma=0, multiplicacao = 1;
	printf("Digite %d numeros: ", MAX);
   	for(i=0; i<MAX; i++){
	   	scanf("%d", &num[i]);
	   	soma += num[i];
	   	multiplicacao *= num[i];
	}
	printf("Numeros = ");
	for(i=0; i<MAX; i++){
		printf("%d  ", num[i]);
	}
	printf("\n");
	printf("Soma = %d\nProduto = %d  ", soma, multiplicacao);
	
	return 0;
}