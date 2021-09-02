#include <stdio.h>
int main(){
	int i, x[10], SI=0, quantP=0;
	printf("Digite 10 numeros inteiros: ");
	
	for(i=0; i<10; i++){
		scanf("%d", &x[i]);
		
		if(x[i]%2 != 0){
			SI += x[i];
		}
		else{
			quantP++;
			if(x[i] == 0){
				quantP--;
			}
		}
	}
	
	printf("Soma dos numeros impares = %d\n", SI);
	printf("Quantidade de numeros pares = %d\n", quantP);
	return 0;
}