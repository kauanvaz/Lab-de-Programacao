#include <stdio.h>
int main(){
	int v[10], i, k=0, soma=0;
	printf("Digite as idades dos 10 membros do clube: ");
	for(i=0; i<10; i++){
		scanf("%d", &v[i]);
		if(v[i]<30){
			k++;
		}
		soma+=v[i];
	}
	printf("Idades inferiores a 30 = %d\n", k);
	printf("Media = %.2f\n", soma/10.0);
	return 0;
}