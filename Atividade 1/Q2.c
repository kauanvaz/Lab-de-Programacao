#include <stdio.h>
int main(){
	int i, sc=0, sd=0;
	float v[10], soma=0, psd;
	printf("Digite o saldo dos 10 clientes: ");
	for(i=0; i<10; i++){
		scanf("%f", &v[i]);
		soma+=v[i];
		if(v[i]>0){
			sc++;
		}
		else{
			sd++;
		}
	}
	psd = sd*10;
	printf("Saldo medio = %.2f\n", soma/10);
	printf("Porcentagem de clientes com saldo devedor = %.2f\n", psd);
	printf("Numero de clientes com saldo credor = %d\n", sc);
	return 0;
}