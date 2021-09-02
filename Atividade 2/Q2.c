#include <stdio.h>
#define MAX 10
int main(){
	int i;
	float num[MAX];
	printf("Digite %d numeros: ", MAX);
	for(i=0; i<MAX; i++){
		scanf("%f", &num[i]);
	}
	
	for(i=MAX-1; i>=0; i--){
		printf("%.2f  ", num[i]);
	}
	return 0;
}