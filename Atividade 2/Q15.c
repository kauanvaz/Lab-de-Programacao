#include <stdio.h>
int main(){
	int num[999], cont=0, x, soma=0, AcimaMedia=0, Abaixo7=0, i;
	float media;
	printf("Digite alguns numeros (digite -1 para parar): \n");
	do{
		scanf("%d", &x);
		if(x != -1){
			num[cont] = x;
			soma += num[cont];
			cont++;
		}
		
	}while(x != -1);
	media = (float)soma/(cont);
	printf("Quantidade de numeros digitados = %d\n", cont);
	for(i=0; i<cont; i++){
		printf("%d  ", num[i]);
	}
	printf("\n");
	for(i=cont-1; i>=0; i--){
		printf("%d\n",num[i]);
	}
	printf("Soma = %d\n", soma);
	printf("Media = %.2f\n", media);
	for(i=0; i<cont; i++){
		if(num[i]>media)
			AcimaMedia++;
	}
	printf("Valores acima da media = %d\n", AcimaMedia);
	for(i=0; i<cont; i++){
		if(num[i]<7)
			Abaixo7++;
	}
	printf("Valores abaixo de 7 = %d\n", Abaixo7);
	return 0;
}